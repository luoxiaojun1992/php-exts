<?php return array (
  0 => 
  array (
    'type' => 'namespace',
    'name' => 'Utils',
    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
    'line' => 3,
    'char' => 5,
  ),
  1 => 
  array (
    'type' => 'class',
    'name' => 'Str',
    'abstract' => 0,
    'final' => 0,
    'definition' => 
    array (
      'properties' => 
      array (
        0 => 
        array (
          'visibility' => 
          array (
            0 => 'protected',
            1 => 'static',
          ),
          'type' => 'property',
          'name' => 'lengthCache',
          'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
          'line' => 7,
          'char' => 10,
        ),
      ),
      'methods' => 
      array (
        0 => 
        array (
          'visibility' => 
          array (
            0 => 'public',
            1 => 'static',
          ),
          'type' => 'method',
          'name' => 'length',
          'parameters' => 
          array (
            0 => 
            array (
              'type' => 'parameter',
              'name' => 'str',
              'const' => 0,
              'data-type' => 'string',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
              'line' => 7,
              'char' => 45,
            ),
            1 => 
            array (
              'type' => 'parameter',
              'name' => 'encoding',
              'const' => 0,
              'data-type' => 'variable',
              'mandatory' => 0,
              'reference' => 0,
              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
              'line' => 7,
              'char' => 59,
            ),
          ),
          'statements' => 
          array (
            0 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'cacheKey',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'implode',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'char',
                          'value' => ':',
                          'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                          'line' => 9,
                          'char' => 27,
                        ),
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 9,
                        'char' => 27,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'array',
                          'left' => 
                          array (
                            0 => 
                            array (
                              'value' => 
                              array (
                                'type' => 'variable',
                                'value' => 'str',
                                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                'line' => 9,
                                'char' => 33,
                              ),
                              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                              'line' => 9,
                              'char' => 33,
                            ),
                            1 => 
                            array (
                              'value' => 
                              array (
                                'type' => 'variable',
                                'value' => 'encoding',
                                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                'line' => 9,
                                'char' => 43,
                              ),
                              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                              'line' => 9,
                              'char' => 43,
                            ),
                          ),
                          'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                          'line' => 9,
                          'char' => 44,
                        ),
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 9,
                        'char' => 44,
                      ),
                    ),
                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                    'line' => 9,
                    'char' => 45,
                  ),
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 9,
                  'char' => 45,
                ),
              ),
              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
              'line' => 10,
              'char' => 3,
            ),
            1 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'isset',
                'left' => 
                array (
                  'type' => 'list',
                  'left' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'static-property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'self',
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 10,
                        'char' => 28,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'lengthCache',
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 10,
                        'char' => 28,
                      ),
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 10,
                      'char' => 28,
                    ),
                    'right' => 
                    array (
                      'type' => 'variable',
                      'value' => 'cacheKey',
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 10,
                      'char' => 37,
                    ),
                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                    'line' => 10,
                    'char' => 38,
                  ),
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 10,
                  'char' => 40,
                ),
                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                'line' => 10,
                'char' => 40,
              ),
              'statements' => 
              array (
                0 => 
                array (
                  'type' => 'return',
                  'expr' => 
                  array (
                    'type' => 'array-access',
                    'left' => 
                    array (
                      'type' => 'static-property-access',
                      'left' => 
                      array (
                        'type' => 'variable',
                        'value' => 'self',
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 11,
                        'char' => 27,
                      ),
                      'right' => 
                      array (
                        'type' => 'variable',
                        'value' => 'lengthCache',
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 11,
                        'char' => 27,
                      ),
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 11,
                      'char' => 27,
                    ),
                    'right' => 
                    array (
                      'type' => 'variable',
                      'value' => 'cacheKey',
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 11,
                      'char' => 36,
                    ),
                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                    'line' => 11,
                    'char' => 37,
                  ),
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 12,
                  'char' => 2,
                ),
              ),
              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
              'line' => 14,
              'char' => 4,
            ),
            2 => 
            array (
              'type' => 'declare',
              'data-type' => 'variable',
              'variables' => 
              array (
                0 => 
                array (
                  'variable' => 'length',
                  'expr' => 
                  array (
                    'type' => 'fcall',
                    'name' => 'mb_strlen',
                    'call-type' => 1,
                    'parameters' => 
                    array (
                      0 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'str',
                          'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                          'line' => 14,
                          'char' => 28,
                        ),
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 14,
                        'char' => 28,
                      ),
                      1 => 
                      array (
                        'parameter' => 
                        array (
                          'type' => 'variable',
                          'value' => 'encoding',
                          'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                          'line' => 14,
                          'char' => 38,
                        ),
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 14,
                        'char' => 38,
                      ),
                    ),
                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                    'line' => 14,
                    'char' => 39,
                  ),
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 14,
                  'char' => 39,
                ),
              ),
              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
              'line' => 16,
              'char' => 3,
            ),
            3 => 
            array (
              'type' => 'if',
              'expr' => 
              array (
                'type' => 'less-equal',
                'left' => 
                array (
                  'type' => 'variable',
                  'value' => 'length',
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 16,
                  'char' => 12,
                ),
                'right' => 
                array (
                  'type' => 'int',
                  'value' => '1000',
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 16,
                  'char' => 19,
                ),
                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                'line' => 16,
                'char' => 19,
              ),
              'statements' => 
              array (
                0 => 
                array (
                  'type' => 'declare',
                  'data-type' => 'variable',
                  'variables' => 
                  array (
                    0 => 
                    array (
                      'variable' => 'length_cache_count',
                      'expr' => 
                      array (
                        'type' => 'fcall',
                        'name' => 'count',
                        'call-type' => 1,
                        'parameters' => 
                        array (
                          0 => 
                          array (
                            'parameter' => 
                            array (
                              'type' => 'static-property-access',
                              'left' => 
                              array (
                                'type' => 'variable',
                                'value' => 'self',
                                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                'line' => 17,
                                'char' => 51,
                              ),
                              'right' => 
                              array (
                                'type' => 'variable',
                                'value' => 'lengthCache',
                                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                'line' => 17,
                                'char' => 51,
                              ),
                              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                              'line' => 17,
                              'char' => 51,
                            ),
                            'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                            'line' => 17,
                            'char' => 51,
                          ),
                        ),
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 17,
                        'char' => 52,
                      ),
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 17,
                      'char' => 52,
                    ),
                  ),
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 18,
                  'char' => 4,
                ),
                1 => 
                array (
                  'type' => 'if',
                  'expr' => 
                  array (
                    'type' => 'greater-equal',
                    'left' => 
                    array (
                      'type' => 'variable',
                      'value' => 'length_cache_count',
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 18,
                      'char' => 25,
                    ),
                    'right' => 
                    array (
                      'type' => 'int',
                      'value' => '1000',
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 18,
                      'char' => 32,
                    ),
                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                    'line' => 18,
                    'char' => 32,
                  ),
                  'statements' => 
                  array (
                    0 => 
                    array (
                      'type' => 'let',
                      'assignments' => 
                      array (
                        0 => 
                        array (
                          'assign-type' => 'static-property',
                          'operator' => 'assign',
                          'variable' => 'self',
                          'property' => 'lengthCache',
                          'expr' => 
                          array (
                            'type' => 'fcall',
                            'name' => 'array_slice',
                            'call-type' => 1,
                            'parameters' => 
                            array (
                              0 => 
                              array (
                                'parameter' => 
                                array (
                                  'type' => 'static-property-access',
                                  'left' => 
                                  array (
                                    'type' => 'variable',
                                    'value' => 'self',
                                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                    'line' => 20,
                                    'char' => 40,
                                  ),
                                  'right' => 
                                  array (
                                    'type' => 'variable',
                                    'value' => 'lengthCache',
                                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                    'line' => 20,
                                    'char' => 40,
                                  ),
                                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                  'line' => 20,
                                  'char' => 40,
                                ),
                                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                'line' => 20,
                                'char' => 40,
                              ),
                              1 => 
                              array (
                                'parameter' => 
                                array (
                                  'type' => 'sub',
                                  'left' => 
                                  array (
                                    'type' => 'variable',
                                    'value' => 'length_cache_count',
                                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                    'line' => 21,
                                    'char' => 42,
                                  ),
                                  'right' => 
                                  array (
                                    'type' => 'int',
                                    'value' => '500',
                                    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                    'line' => 21,
                                    'char' => 47,
                                  ),
                                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                  'line' => 21,
                                  'char' => 47,
                                ),
                                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                'line' => 21,
                                'char' => 47,
                              ),
                              2 => 
                              array (
                                'parameter' => 
                                array (
                                  'type' => 'null',
                                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                  'line' => 22,
                                  'char' => 27,
                                ),
                                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                'line' => 22,
                                'char' => 27,
                              ),
                              3 => 
                              array (
                                'parameter' => 
                                array (
                                  'type' => 'bool',
                                  'value' => 'true',
                                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                  'line' => 24,
                                  'char' => 18,
                                ),
                                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                                'line' => 24,
                                'char' => 18,
                              ),
                            ),
                            'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                            'line' => 24,
                            'char' => 19,
                          ),
                          'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                          'line' => 24,
                          'char' => 19,
                        ),
                      ),
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 25,
                      'char' => 3,
                    ),
                  ),
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 27,
                  'char' => 5,
                ),
                2 => 
                array (
                  'type' => 'let',
                  'assignments' => 
                  array (
                    0 => 
                    array (
                      'assign-type' => 'static-property-array-index',
                      'operator' => 'assign',
                      'variable' => 'self',
                      'property' => 'lengthCache',
                      'index-expr' => 
                      array (
                        0 => 
                        array (
                          'type' => 'variable',
                          'value' => 'cacheKey',
                          'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                          'line' => 27,
                          'char' => 33,
                        ),
                      ),
                      'expr' => 
                      array (
                        'type' => 'variable',
                        'value' => 'length',
                        'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                        'line' => 27,
                        'char' => 43,
                      ),
                      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                      'line' => 27,
                      'char' => 43,
                    ),
                  ),
                  'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                  'line' => 28,
                  'char' => 2,
                ),
              ),
              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
              'line' => 30,
              'char' => 14,
            ),
            4 => 
            array (
              'type' => 'return',
              'expr' => 
              array (
                'type' => 'variable',
                'value' => 'length',
                'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
                'line' => 30,
                'char' => 22,
              ),
              'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
              'line' => 31,
              'char' => 5,
            ),
          ),
          'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
          'line' => 7,
          'last-line' => 32,
          'char' => 26,
        ),
      ),
      'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
      'line' => 3,
      'char' => 5,
    ),
    'file' => '/Users/luoxiaojun/php-exts/utils/utils/str.zep',
    'line' => 3,
    'char' => 5,
  ),
);