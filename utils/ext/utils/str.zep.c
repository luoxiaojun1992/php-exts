
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
#include "kernel/string.h"
#include "kernel/object.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Utils_Str) {

	ZEPHIR_REGISTER_CLASS(Utils, Str, utils, str, utils_str_method_entry, 0);

	zend_declare_property_null(utils_str_ce, SL("lengthCache"), ZEND_ACC_PROTECTED|ZEND_ACC_STATIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Utils_Str, length) {

	zval _0;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *str_param = NULL, *encoding = NULL, encoding_sub, __$null, __$true, cacheKey, _1, _2, length, _3$$3, _4$$3, length_cache_count$$4, _5$$4, _6$$5, _7$$5, _8$$5;
	zval str;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&encoding_sub);
	ZVAL_NULL(&__$null);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&cacheKey);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&length);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&length_cache_count$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$5);
	ZVAL_UNDEF(&_7$$5);
	ZVAL_UNDEF(&_8$$5);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &str_param, &encoding);

	zephir_get_strval(&str, str_param);
	if (!encoding) {
		encoding = &encoding_sub;
		ZEPHIR_INIT_VAR(encoding);
		ZVAL_STRING(encoding, "utf8");
	}


	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 2, 0 TSRMLS_CC);
	zephir_array_fast_append(&_0, &str);
	zephir_array_fast_append(&_0, encoding);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_STRING(&_1, ":");
	ZEPHIR_INIT_VAR(&cacheKey);
	zephir_fast_join(&cacheKey, &_1, &_0 TSRMLS_CC);
	zephir_read_static_property_ce(&_2, utils_str_ce, SL("lengthCache"), PH_NOISY_CC | PH_READONLY);
	if (zephir_array_isset(&_2, &cacheKey)) {
		php_printf("%d", 1111);
		zephir_read_static_property_ce(&_3$$3, utils_str_ce, SL("lengthCache"), PH_NOISY_CC | PH_READONLY);
		zephir_array_fetch(&_4$$3, &_3$$3, &cacheKey, PH_NOISY | PH_READONLY, "utils/str.zep", 12 TSRMLS_CC);
		RETURN_CTOR(&_4$$3);
	}
	ZEPHIR_CALL_FUNCTION(&length, "mb_strlen", NULL, 1, &str, encoding);
	zephir_check_call_status();
	if (ZEPHIR_LE_LONG(&length, 1000)) {
		zephir_read_static_property_ce(&_5$$4, utils_str_ce, SL("lengthCache"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_INIT_VAR(&length_cache_count$$4);
		ZVAL_LONG(&length_cache_count$$4, zephir_fast_count_int(&_5$$4 TSRMLS_CC));
		if (ZEPHIR_GE_LONG(&length_cache_count$$4, 1000)) {
			zephir_read_static_property_ce(&_6$$5, utils_str_ce, SL("lengthCache"), PH_NOISY_CC | PH_READONLY);
			ZVAL_LONG(&_7$$5, (zephir_get_numberval(&length_cache_count$$4) - 500));
			ZEPHIR_CALL_FUNCTION(&_8$$5, "array_slice", NULL, 2, &_6$$5, &_7$$5, &__$null, &__$true);
			zephir_check_call_status();
			zend_update_static_property(utils_str_ce, ZEND_STRL("lengthCache"), &_8$$5);
		}
		zephir_update_static_property_array_multi_ce(utils_str_ce, SL("lengthCache"), &length TSRMLS_CC, SL("z"), 1, &cacheKey);
	}
	RETURN_CCTOR(&length);

}

