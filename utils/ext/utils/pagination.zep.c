
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
#include "kernel/object.h"
#include "kernel/fcall.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/math.h"
#include "kernel/array.h"


/**
 * Class Pagination
 *
 * {@inheritdoc}
 *
 * Lightweight Pagination
 *
 * @package Utils
 */
ZEPHIR_INIT_CLASS(Utils_Pagination) {

	ZEPHIR_REGISTER_CLASS(Utils, Pagination, utils, pagination, utils_pagination_method_entry, 0);

	zend_declare_property_null(utils_pagination_ce, SL("total"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(utils_pagination_ce, SL("per_page"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(utils_pagination_ce, SL("page_num"), 1, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(utils_pagination_ce, SL("offset"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(utils_pagination_ce, SL("page_total"), ZEND_ACC_PROTECTED TSRMLS_CC);

	/**
	 * @var callable|null $render
	 */
	zend_declare_property_null(utils_pagination_ce, SL("render"), ZEND_ACC_PROTECTED TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Utils_Pagination, __construct) {

	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *total, total_sub, *per_page, per_page_sub, *page_num = NULL, page_num_sub, *render = NULL, render_sub, __$null;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&total_sub);
	ZVAL_UNDEF(&per_page_sub);
	ZVAL_UNDEF(&page_num_sub);
	ZVAL_UNDEF(&render_sub);
	ZVAL_NULL(&__$null);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 2, &total, &per_page, &page_num, &render);

	if (!page_num) {
		page_num = &page_num_sub;
		ZEPHIR_INIT_VAR(page_num);
		ZVAL_LONG(page_num, 1);
	}
	if (!render) {
		render = &render_sub;
		render = &__$null;
	}


	zephir_update_property_zval(this_ptr, SL("total"), total);
	zephir_update_property_zval(this_ptr, SL("per_page"), per_page);
	zephir_update_property_zval(this_ptr, SL("page_num"), page_num);
	zephir_update_property_zval(this_ptr, SL("render"), render);
	ZEPHIR_CALL_METHOD(NULL, this_ptr, "calculate", NULL, 0);
	zephir_check_call_status();
	ZEPHIR_MM_RESTORE();

}

/**
 * Calculate pagination params
 */
PHP_METHOD(Utils_Pagination, calculate) {

	zval _0, _1, _2, _3, _4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);


	zephir_read_property(&_0, this_ptr, SL("total"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("per_page"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_SINIT_VAR(_2);
	div_function(&_2, &_0, &_1 TSRMLS_CC);
	ZVAL_DOUBLE(&_0, zephir_ceil(&_2 TSRMLS_CC));
	ZEPHIR_INIT_ZVAL_NREF(_1);
	ZVAL_LONG(&_1, zephir_get_intval(&_0));
	zephir_update_property_zval(this_ptr, SL("page_total"), &_1);
	zephir_read_property(&_1, this_ptr, SL("page_num"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_3, this_ptr, SL("per_page"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_ZVAL_NREF(_4);
	ZVAL_LONG(&_4, (((zephir_get_numberval(&_1) - 1)) * zephir_get_numberval(&_3)));
	zephir_update_property_zval(this_ptr, SL("offset"), &_4);

}

/**
 * Fix pagination params
 *
 * @param  $current_page_count
 * @return $this
 */
PHP_METHOD(Utils_Pagination, fix) {

	zephir_fcall_cache_entry *_3 = NULL;
	zval *current_page_count_param = NULL, current_total, _0, _1, _2, _4$$5, _5$$6;
	zend_long current_page_count, ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&current_total);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_4$$5);
	ZVAL_UNDEF(&_5$$6);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &current_page_count_param);

	current_page_count = zephir_get_intval(current_page_count_param);


	zephir_read_property(&_0, this_ptr, SL("page_num"), PH_NOISY_CC | PH_READONLY);
	zephir_read_property(&_1, this_ptr, SL("per_page"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_INIT_VAR(&current_total);
	ZVAL_LONG(&current_total, ((((zephir_get_numberval(&_0) - 1)) * zephir_get_numberval(&_1)) + current_page_count));
	zephir_read_property(&_2, this_ptr, SL("total"), PH_NOISY_CC | PH_READONLY);
	if (ZEPHIR_GT(&current_total, &_2)) {
		if (current_page_count > 0) {
			zephir_update_property_zval(this_ptr, SL("total"), &current_total);
			ZEPHIR_CALL_METHOD(NULL, this_ptr, "calculate", &_3, 0);
			zephir_check_call_status();
		}
	} else {
		zephir_read_property(&_4$$5, this_ptr, SL("per_page"), PH_NOISY_CC | PH_READONLY);
		if (ZEPHIR_GT_LONG(&_4$$5, current_page_count)) {
			zephir_read_property(&_5$$6, this_ptr, SL("total"), PH_NOISY_CC | PH_READONLY);
			if (ZEPHIR_LT(&current_total, &_5$$6)) {
				zephir_update_property_zval(this_ptr, SL("total"), &current_total);
				ZEPHIR_CALL_METHOD(NULL, this_ptr, "calculate", &_3, 0);
				zephir_check_call_status();
			}
		}
	}
	RETURN_THIS();

}

/**
 * @param int $total
 * @return $this
 */
PHP_METHOD(Utils_Pagination, setTotal) {

	zval *total_param = NULL, _0;
	zend_long total;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);

	zephir_fetch_params(0, 1, 0, &total_param);

	total = zephir_get_intval(total_param);


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZVAL_LONG(&_0, total);
	zephir_update_property_zval(this_ptr, SL("total"), &_0);
	RETURN_THISW();

}

/**
 * @return mixed
 */
PHP_METHOD(Utils_Pagination, getTotal) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "total");

}

/**
 * @return mixed
 */
PHP_METHOD(Utils_Pagination, getPerPage) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "per_page");

}

/**
 * @return int
 */
PHP_METHOD(Utils_Pagination, getPageNum) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "page_num");

}

/**
 * @return mixed
 */
PHP_METHOD(Utils_Pagination, getOffset) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "offset");

}

/**
 * @return mixed
 */
PHP_METHOD(Utils_Pagination, getPageTotal) {

	zval *this_ptr = getThis();


	RETURN_MEMBER(getThis(), "page_total");

}

/**
 * Render pagination ui
 *
 * @return mixed|null
 */
PHP_METHOD(Utils_Pagination, render) {

	zval tmpArraydfcb2d5180223c5cbaefb9740c6421d4, _0, _1$$3, _2$$3, _3$$3, _4$$3, _5$$3, _6$$3, _7$$3, _8$$3;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1$$3);
	ZVAL_UNDEF(&_2$$3);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);

	ZEPHIR_MM_GROW();

	zephir_read_property(&_0, this_ptr, SL("render"), PH_NOISY_CC | PH_READONLY);
	if (!(Z_TYPE_P(&_0) == IS_NULL)) {
		ZEPHIR_INIT_VAR(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4);
		zephir_create_array(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4, 6, 0 TSRMLS_CC);
		ZEPHIR_OBS_VAR(&_1$$3);
		zephir_read_property(&_1$$3, this_ptr, SL("total"), PH_NOISY_CC);
		zephir_array_update_string(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4, SL("total"), &_1$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_OBS_NVAR(&_1$$3);
		zephir_read_property(&_1$$3, this_ptr, SL("per_page"), PH_NOISY_CC);
		zephir_array_update_string(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4, SL("per_page"), &_1$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_OBS_NVAR(&_1$$3);
		zephir_read_property(&_1$$3, this_ptr, SL("page_num"), PH_NOISY_CC);
		zephir_array_update_string(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4, SL("page_num"), &_1$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_OBS_NVAR(&_1$$3);
		zephir_read_property(&_1$$3, this_ptr, SL("page_total"), PH_NOISY_CC);
		zephir_array_update_string(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4, SL("page_total"), &_1$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_INIT_VAR(&_2$$3);
		zephir_read_property(&_3$$3, this_ptr, SL("page_num"), PH_NOISY_CC | PH_READONLY);
		zephir_read_property(&_4$$3, this_ptr, SL("page_total"), PH_NOISY_CC | PH_READONLY);
		if (ZEPHIR_LT(&_3$$3, &_4$$3)) {
			zephir_read_property(&_5$$3, this_ptr, SL("page_num"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_INIT_NVAR(&_2$$3);
			ZVAL_LONG(&_2$$3, (zephir_get_numberval(&_5$$3) + 1));
		} else {
			ZEPHIR_OBS_NVAR(&_2$$3);
			zephir_read_property(&_2$$3, this_ptr, SL("page_total"), PH_NOISY_CC);
		}
		zephir_array_update_string(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4, SL("next_page"), &_2$$3, PH_COPY | PH_SEPARATE);
		ZEPHIR_INIT_LNVAR(_2$$3);
		zephir_read_property(&_6$$3, this_ptr, SL("page_num"), PH_NOISY_CC | PH_READONLY);
		if (ZEPHIR_GT_LONG(&_6$$3, 1)) {
			zephir_read_property(&_7$$3, this_ptr, SL("page_num"), PH_NOISY_CC | PH_READONLY);
			ZEPHIR_INIT_NVAR(&_2$$3);
			ZVAL_LONG(&_2$$3, (zephir_get_numberval(&_7$$3) - 1));
		} else {
			ZEPHIR_INIT_NVAR(&_2$$3);
			ZVAL_LONG(&_2$$3, 1);
		}
		zephir_array_update_string(&tmpArraydfcb2d5180223c5cbaefb9740c6421d4, SL("prev_page"), &_2$$3, PH_COPY | PH_SEPARATE);
		zephir_read_property(&_8$$3, this_ptr, SL("render"), PH_NOISY_CC | PH_READONLY);
		ZEPHIR_CALL_USER_FUNC_ARRAY(return_value, &_8$$3, &tmpArraydfcb2d5180223c5cbaefb9740c6421d4);
		zephir_check_call_status();
		RETURN_MM();
	}
	RETURN_MM_NULL();

}

