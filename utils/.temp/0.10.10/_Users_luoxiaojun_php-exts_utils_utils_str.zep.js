[
    {
        "type": "namespace",
        "name": "Utils",
        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
        "line": 3,
        "char": 5
    },
    {
        "type": "class",
        "name": "Str",
        "abstract": 0,
        "final": 0,
        "definition": {
            "properties": [
                {
                    "visibility": [
                        "protected",
                        "static"
                    ],
                    "type": "property",
                    "name": "lengthCache",
                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                    "line": 7,
                    "char": 10
                }
            ],
            "methods": [
                {
                    "visibility": [
                        "public",
                        "static"
                    ],
                    "type": "method",
                    "name": "length",
                    "parameters": [
                        {
                            "type": "parameter",
                            "name": "str",
                            "const": 0,
                            "data-type": "string",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                            "line": 7,
                            "char": 45
                        },
                        {
                            "type": "parameter",
                            "name": "encoding",
                            "const": 0,
                            "data-type": "variable",
                            "mandatory": 0,
                            "reference": 0,
                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                            "line": 7,
                            "char": 59
                        }
                    ],
                    "statements": [
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "cacheKey",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "implode",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "char",
                                                    "value": ":",
                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                    "line": 9,
                                                    "char": 27
                                                },
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 9,
                                                "char": 27
                                            },
                                            {
                                                "parameter": {
                                                    "type": "array",
                                                    "left": [
                                                        {
                                                            "value": {
                                                                "type": "variable",
                                                                "value": "str",
                                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                "line": 9,
                                                                "char": 33
                                                            },
                                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                            "line": 9,
                                                            "char": 33
                                                        },
                                                        {
                                                            "value": {
                                                                "type": "variable",
                                                                "value": "encoding",
                                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                "line": 9,
                                                                "char": 43
                                                            },
                                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                            "line": 9,
                                                            "char": 43
                                                        }
                                                    ],
                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                    "line": 9,
                                                    "char": 44
                                                },
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 9,
                                                "char": 44
                                            }
                                        ],
                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                        "line": 9,
                                        "char": 45
                                    },
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 9,
                                    "char": 45
                                }
                            ],
                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                            "line": 10,
                            "char": 3
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "isset",
                                "left": {
                                    "type": "list",
                                    "left": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "static-property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "self",
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 10,
                                                "char": 28
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "lengthCache",
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 10,
                                                "char": 28
                                            },
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 10,
                                            "char": 28
                                        },
                                        "right": {
                                            "type": "variable",
                                            "value": "cacheKey",
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 10,
                                            "char": 37
                                        },
                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                        "line": 10,
                                        "char": 38
                                    },
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 10,
                                    "char": 40
                                },
                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                "line": 10,
                                "char": 40
                            },
                            "statements": [
                                {
                                    "type": "return",
                                    "expr": {
                                        "type": "array-access",
                                        "left": {
                                            "type": "static-property-access",
                                            "left": {
                                                "type": "variable",
                                                "value": "self",
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 11,
                                                "char": 27
                                            },
                                            "right": {
                                                "type": "variable",
                                                "value": "lengthCache",
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 11,
                                                "char": 27
                                            },
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 11,
                                            "char": 27
                                        },
                                        "right": {
                                            "type": "variable",
                                            "value": "cacheKey",
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 11,
                                            "char": 36
                                        },
                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                        "line": 11,
                                        "char": 37
                                    },
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 12,
                                    "char": 2
                                }
                            ],
                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                            "line": 14,
                            "char": 4
                        },
                        {
                            "type": "declare",
                            "data-type": "variable",
                            "variables": [
                                {
                                    "variable": "length",
                                    "expr": {
                                        "type": "fcall",
                                        "name": "mb_strlen",
                                        "call-type": 1,
                                        "parameters": [
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "str",
                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                    "line": 14,
                                                    "char": 28
                                                },
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 14,
                                                "char": 28
                                            },
                                            {
                                                "parameter": {
                                                    "type": "variable",
                                                    "value": "encoding",
                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                    "line": 14,
                                                    "char": 38
                                                },
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 14,
                                                "char": 38
                                            }
                                        ],
                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                        "line": 14,
                                        "char": 39
                                    },
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 14,
                                    "char": 39
                                }
                            ],
                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                            "line": 16,
                            "char": 3
                        },
                        {
                            "type": "if",
                            "expr": {
                                "type": "less-equal",
                                "left": {
                                    "type": "variable",
                                    "value": "length",
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 16,
                                    "char": 12
                                },
                                "right": {
                                    "type": "int",
                                    "value": "1000",
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 16,
                                    "char": 19
                                },
                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                "line": 16,
                                "char": 19
                            },
                            "statements": [
                                {
                                    "type": "declare",
                                    "data-type": "variable",
                                    "variables": [
                                        {
                                            "variable": "length_cache_count",
                                            "expr": {
                                                "type": "fcall",
                                                "name": "count",
                                                "call-type": 1,
                                                "parameters": [
                                                    {
                                                        "parameter": {
                                                            "type": "static-property-access",
                                                            "left": {
                                                                "type": "variable",
                                                                "value": "self",
                                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                "line": 17,
                                                                "char": 51
                                                            },
                                                            "right": {
                                                                "type": "variable",
                                                                "value": "lengthCache",
                                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                "line": 17,
                                                                "char": 51
                                                            },
                                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                            "line": 17,
                                                            "char": 51
                                                        },
                                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                        "line": 17,
                                                        "char": 51
                                                    }
                                                ],
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 17,
                                                "char": 52
                                            },
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 17,
                                            "char": 52
                                        }
                                    ],
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 18,
                                    "char": 4
                                },
                                {
                                    "type": "if",
                                    "expr": {
                                        "type": "greater-equal",
                                        "left": {
                                            "type": "variable",
                                            "value": "length_cache_count",
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 18,
                                            "char": 25
                                        },
                                        "right": {
                                            "type": "int",
                                            "value": "1000",
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 18,
                                            "char": 32
                                        },
                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                        "line": 18,
                                        "char": 32
                                    },
                                    "statements": [
                                        {
                                            "type": "let",
                                            "assignments": [
                                                {
                                                    "assign-type": "static-property",
                                                    "operator": "assign",
                                                    "variable": "self",
                                                    "property": "lengthCache",
                                                    "expr": {
                                                        "type": "fcall",
                                                        "name": "array_slice",
                                                        "call-type": 1,
                                                        "parameters": [
                                                            {
                                                                "parameter": {
                                                                    "type": "static-property-access",
                                                                    "left": {
                                                                        "type": "variable",
                                                                        "value": "self",
                                                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                        "line": 20,
                                                                        "char": 40
                                                                    },
                                                                    "right": {
                                                                        "type": "variable",
                                                                        "value": "lengthCache",
                                                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                        "line": 20,
                                                                        "char": 40
                                                                    },
                                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                    "line": 20,
                                                                    "char": 40
                                                                },
                                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                "line": 20,
                                                                "char": 40
                                                            },
                                                            {
                                                                "parameter": {
                                                                    "type": "sub",
                                                                    "left": {
                                                                        "type": "variable",
                                                                        "value": "length_cache_count",
                                                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                        "line": 21,
                                                                        "char": 42
                                                                    },
                                                                    "right": {
                                                                        "type": "int",
                                                                        "value": "500",
                                                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                        "line": 21,
                                                                        "char": 47
                                                                    },
                                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                    "line": 21,
                                                                    "char": 47
                                                                },
                                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                "line": 21,
                                                                "char": 47
                                                            },
                                                            {
                                                                "parameter": {
                                                                    "type": "null",
                                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                    "line": 22,
                                                                    "char": 27
                                                                },
                                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                "line": 22,
                                                                "char": 27
                                                            },
                                                            {
                                                                "parameter": {
                                                                    "type": "bool",
                                                                    "value": "true",
                                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                    "line": 24,
                                                                    "char": 18
                                                                },
                                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                                "line": 24,
                                                                "char": 18
                                                            }
                                                        ],
                                                        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                        "line": 24,
                                                        "char": 19
                                                    },
                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                    "line": 24,
                                                    "char": 19
                                                }
                                            ],
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 25,
                                            "char": 3
                                        }
                                    ],
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 27,
                                    "char": 5
                                },
                                {
                                    "type": "let",
                                    "assignments": [
                                        {
                                            "assign-type": "static-property-array-index",
                                            "operator": "assign",
                                            "variable": "self",
                                            "property": "lengthCache",
                                            "index-expr": [
                                                {
                                                    "type": "variable",
                                                    "value": "cacheKey",
                                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                    "line": 27,
                                                    "char": 33
                                                }
                                            ],
                                            "expr": {
                                                "type": "variable",
                                                "value": "length",
                                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                                "line": 27,
                                                "char": 43
                                            },
                                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                            "line": 27,
                                            "char": 43
                                        }
                                    ],
                                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                    "line": 28,
                                    "char": 2
                                }
                            ],
                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                            "line": 30,
                            "char": 14
                        },
                        {
                            "type": "return",
                            "expr": {
                                "type": "variable",
                                "value": "length",
                                "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                                "line": 30,
                                "char": 22
                            },
                            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                            "line": 31,
                            "char": 5
                        }
                    ],
                    "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
                    "line": 7,
                    "last-line": 32,
                    "char": 26
                }
            ],
            "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
            "line": 3,
            "char": 5
        },
        "file": "\/Users\/luoxiaojun\/php-exts\/utils\/utils\/str.zep",
        "line": 3,
        "char": 5
    }
]