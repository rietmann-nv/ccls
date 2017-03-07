template<typename T>
static int foo() {
  return 3;
}

int a = foo<int>();
int b = foo<bool>();

// TODO: put template foo inside a namespace
// TODO: put template foo inside a template class inside a namespace

/*
OUTPUT:
{
  "types": [],
  "functions": [{
      "id": 0,
      "usr": "c:template_func_usage_folded_into_one.cc@FT@>1#Tfoo#I#",
      "short_name": "foo",
      "qualified_name": "foo",
      "definition": "1:2:12",
      "uses": ["1:2:12", "1:6:9", "1:7:9"]
    }],
  "variables": [{
      "id": 0,
      "usr": "c:@a",
      "short_name": "a",
      "qualified_name": "a",
      "definition": "1:6:5",
      "uses": ["1:6:5"]
    }, {
      "id": 1,
      "usr": "c:@b",
      "short_name": "b",
      "qualified_name": "b",
      "definition": "1:7:5",
      "uses": ["1:7:5"]
    }]
}
*/