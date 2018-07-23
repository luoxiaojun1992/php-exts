
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Utils_Arr) {

	ZEPHIR_REGISTER_CLASS(Utils, Arr, utils, arr, utils_arr_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Utils_Arr, exists) {

	zval *arr_param = NULL, *key, key_sub, sub_key$$3, *_0$$3, _1$$6;
	zval arr;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&arr);
	ZVAL_UNDEF(&key_sub);
	ZVAL_UNDEF(&sub_key$$3);
	ZVAL_UNDEF(&_1$$6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &arr_param, &key);

	zephir_get_arrval(&arr, arr_param);


	if (Z_TYPE_P(key) == IS_ARRAY) {
		zephir_is_iterable(key, 0, "utils/arr.zep", 21);
		ZEND_HASH_FOREACH_VAL(Z_ARRVAL_P(key), _0$$3)
		{
			ZEPHIR_INIT_NVAR(&sub_key$$3);
			ZVAL_COPY(&sub_key$$3, _0$$3);
			if (!(Z_TYPE_P(&arr) == IS_ARRAY)) {
				RETURN_MM_BOOL(0);
			}
			if (zephir_array_key_exists(&arr, &sub_key$$3 TSRMLS_CC)) {
				zephir_array_fetch(&_1$$6, &arr, &sub_key$$3, PH_NOISY | PH_READONLY, "utils/arr.zep", 15 TSRMLS_CC);
				ZEPHIR_CPY_WRT(&arr, &_1$$6);
			} else {
				RETURN_MM_BOOL(0);
			}
		} ZEND_HASH_FOREACH_END();
		ZEPHIR_INIT_NVAR(&sub_key$$3);
		RETURN_MM_BOOL(1);
	} else {
		RETURN_MM_BOOL(zephir_array_key_exists(&arr, key TSRMLS_CC));
	}

}

