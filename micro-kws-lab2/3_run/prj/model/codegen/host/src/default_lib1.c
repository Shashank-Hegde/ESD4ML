// tvm target: c -keys=cpu 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_layout_transform_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 30; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      T_subtract[((ax1_outer * 16) + ax1_inner)] = (((int16_t)p0[((((ax1_inner >> 2) * 120) + (ax1_outer * 4)) + (ax1_inner & 3))]) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  void* pool_sum_let = (&(global_workspace_15_var[7680]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 24; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
      for (int32_t ax4_init = 0; ax4_init < 4; ++ax4_init) {
        ((int32_t*)pool_sum_let)[(((ax0_ax1_fused_ax2_fused * 20) + (ax3 * 4)) + ax4_init)] = 0;
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 4; ++rv0_rv1_fused) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 20) + (ax3 * 4)) + ax4);
          ((int32_t*)pool_sum_let)[cse_var_1] = (((int32_t*)pool_sum_let)[cse_var_1] + p0[(((((ax0_ax1_fused_ax2_fused * 80) + ((rv0_rv1_fused >> 1) * 40)) + (ax3 * 8)) + ((rv0_rv1_fused & 1) * 4)) + ax4)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_1 = 0; ax3_1 < 5; ++ax3_1) {
        for (int32_t ax4_1 = 0; ax4_1 < 4; ++ax4_1) {
          int32_t cse_var_2 = ((((ax0_ax1_fused * 120) + (ax2 * 20)) + (ax3_1 * 4)) + ax4_1);
          T_cast[cse_var_2] = ((int8_t)(((int32_t*)pool_sum_let)[cse_var_2] / 4));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast_cast_subtract(int32_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* pool_sum_let = (&(global_workspace_11_var[0]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 36; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
      for (int32_t ax4_init = 0; ax4_init < 4; ++ax4_init) {
        ((int32_t*)pool_sum_let)[(((ax0_ax1_fused_ax2_fused * 40) + (ax3 * 4)) + ax4_init)] = 0;
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 4; ++rv0_rv1_fused) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 40) + (ax3 * 4)) + ax4);
          ((int32_t*)pool_sum_let)[cse_var_1] = (((int32_t*)pool_sum_let)[cse_var_1] + p0[(((((ax0_ax1_fused_ax2_fused * 160) + ((rv0_rv1_fused >> 1) * 80)) + (ax3 * 8)) + ((rv0_rv1_fused & 1) * 4)) + ax4)]);
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 3; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      for (int32_t ax3_1 = 0; ax3_1 < 10; ++ax3_1) {
        for (int32_t ax4_1 = 0; ax4_1 < 4; ++ax4_1) {
          int32_t cse_var_2 = ((((ax0_ax1_fused * 480) + (ax2 * 40)) + (ax3_1 * 4)) + ax4_1);
          T_subtract[cse_var_2] = (((int16_t)((int8_t)(((int32_t*)pool_sum_let)[cse_var_2] / 4))) - (int16_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip(int16_t* p0, int32_t* compute, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_5_let = (&(global_const_workspace_8_var[54832]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_4_let = (&(global_const_workspace_8_var[54880]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_3_let = (&(global_const_workspace_8_var[54928]));
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_8_var[54784]));
  void* fused_constant_1_let = (&(global_const_workspace_8_var[30720]));
  void* data_pad_let = (&(global_workspace_9_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 116; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 25; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 29);
        int32_t cse_var_1 = (i3 * 4);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 100) + cse_var_1) + i4)] = (((((2 <= cse_var_2) && (cse_var_2 < 26)) && (2 <= i3)) && (i3 < 22)) ? p0[((((((i0_i1_fused_i2_fused / 29) * 1920) + (cse_var_2 * 80)) + cse_var_1) + i4) - 168)] : (int16_t)0);
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 72; ++i0_i1_fused_i2_fused_1) {
    void* conv2d_NCHWc_global_let = (&(global_workspace_9_var[46240]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
    }
    for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
    }
    for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
    }
    for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
    }
    for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
    }
    for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
    }
    for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
    }
    for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0;
    }
    for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0;
    }
    for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 4; ++oc_block_c_init_18) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 72)] = 0;
    }
    for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 4; ++oc_block_c_init_19) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 76)] = 0;
    }
    for (int32_t ic_outer = 0; ic_outer < 4; ++ic_outer) {
      for (int32_t kh = 0; kh < 6; ++kh) {
        for (int32_t kw = 0; kw < 6; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[(((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)])));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 4)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 12)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 20)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 28)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_10 = (oc_block_c_8 + 32);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)])));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_11 = (oc_block_c_9 + 36);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 36)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)])));
            }
            for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
              int32_t cse_var_12 = (oc_block_c_10 + 40);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 40)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_10)])));
            }
            for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
              int32_t cse_var_13 = (oc_block_c_11 + 44);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 44)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_11)])));
            }
            for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
              int32_t cse_var_14 = (oc_block_c_12 + 48);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 48)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_12)])));
            }
            for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
              int32_t cse_var_15 = (oc_block_c_13 + 52);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 52)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_13)])));
            }
            for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
              int32_t cse_var_16 = (oc_block_c_14 + 56);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 56)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_14)])));
            }
            for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
              int32_t cse_var_17 = (oc_block_c_15 + 60);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 60)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_15)])));
            }
            for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
              int32_t cse_var_18 = (oc_block_c_16 + 64);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_18] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_18] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 64)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_16)])));
            }
            for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
              int32_t cse_var_19 = (oc_block_c_17 + 68);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_19] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_19] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 68)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_17)])));
            }
            for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
              int32_t cse_var_20 = (oc_block_c_18 + 72);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_20] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_20] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 72)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_18)])));
            }
            for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
              int32_t cse_var_21 = (oc_block_c_19 + 76);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_21] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_21] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 2900) + (kh * 100)) + ((i0_i1_fused_i2_fused_1 % 24) * 100)) + (kw * 4)) + ic_inner) + 76)]) * ((int32_t)((int16_t*)fused_constant_1_let)[(((((((i0_i1_fused_i2_fused_1 / 24) * 2304) + (ic_outer * 576)) + (kh * 96)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_19)])));
            }
          }
        }
      }
    }
    for (int32_t i3_inner = 0; i3_inner < 20; ++i3_inner) {
      for (int32_t i4_1 = 0; i4_1 < 4; ++i4_1) {
        int32_t cse_var_23 = (i3_inner * 4);
        int32_t cse_var_22 = (((i0_i1_fused_i2_fused_1 / 24) * 4) + i4_1);
        int32_t __1 = ((int32_t)(((((int64_t)(((int32_t*)conv2d_NCHWc_global_let)[(cse_var_23 + i4_1)] + ((int32_t*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[cse_var_22])) * ((int64_t)((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_3_let)[cse_var_22])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_5_let)[cse_var_22] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_5_let)[cse_var_22] + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        compute[(((i0_i1_fused_i2_fused_1 * 80) + cse_var_23) + i4_1)] = ((__2) > (-128) ? (__2) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip_1(int16_t* p0, int32_t* compute, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_8_let = (&(global_const_workspace_12_var[54400]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_7_let = (&(global_const_workspace_12_var[54464]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_6_let = (&(global_const_workspace_12_var[54528]));
  void* fused_nn_contrib_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_12_var[54272]));
  void* fused_constant_2_let = (&(global_const_workspace_12_var[44544]));
  void* data_pad_let = (&(global_workspace_13_var[7680]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 45; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 13; ++i3) {
      for (int32_t i4 = 0; i4 < 4; ++i4) {
        int32_t cse_var_2 = (i0_i1_fused_i2_fused % 15);
        int32_t cse_var_1 = (i3 * 4);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 52) + cse_var_1) + i4)] = (((((1 <= cse_var_2) && (cse_var_2 < 13)) && (1 <= i3)) && (i3 < 11)) ? p0[((((((i0_i1_fused_i2_fused / 15) * 480) + (cse_var_2 * 40)) + cse_var_1) + i4) - 44)] : (int16_t)0);
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 48; ++i0_i1_fused_i2_fused_1) {
    void* conv2d_NCHWc_global_let = (&(global_workspace_13_var[12368]));
    for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
      ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
    }
    for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
    }
    for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
    }
    for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
    }
    for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
    }
    for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
    }
    for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
    }
    for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
    }
    for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
    }
    for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
      ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
    }
    for (int32_t ic_outer = 0; ic_outer < 3; ++ic_outer) {
      for (int32_t kh = 0; kh < 4; ++kh) {
        for (int32_t kw = 0; kw < 4; ++kw) {
          for (int32_t ic_inner = 0; ic_inner < 4; ++ic_inner) {
            for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
              ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[(((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c)])));
            }
            for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
              int32_t cse_var_3 = (oc_block_c_1 + 4);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 4)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_1)])));
            }
            for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
              int32_t cse_var_4 = (oc_block_c_2 + 8);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 8)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_2)])));
            }
            for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
              int32_t cse_var_5 = (oc_block_c_3 + 12);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 12)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_3)])));
            }
            for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
              int32_t cse_var_6 = (oc_block_c_4 + 16);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 16)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_4)])));
            }
            for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
              int32_t cse_var_7 = (oc_block_c_5 + 20);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 20)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_5)])));
            }
            for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
              int32_t cse_var_8 = (oc_block_c_6 + 24);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 24)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_6)])));
            }
            for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
              int32_t cse_var_9 = (oc_block_c_7 + 28);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 28)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_7)])));
            }
            for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
              int32_t cse_var_10 = (oc_block_c_8 + 32);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 32)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_8)])));
            }
            for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
              int32_t cse_var_11 = (oc_block_c_9 + 36);
              ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)((int16_t*)data_pad_let)[((((((ic_outer * 780) + (kh * 52)) + ((i0_i1_fused_i2_fused_1 % 12) * 52)) + (kw * 4)) + ic_inner) + 36)]) * ((int32_t)((int16_t*)fused_constant_2_let)[(((((((i0_i1_fused_i2_fused_1 / 12) * 768) + (ic_outer * 256)) + (kh * 64)) + (kw * 16)) + (ic_inner * 4)) + oc_block_c_9)])));
            }
          }
        }
      }
    }
    for (int32_t i3_inner = 0; i3_inner < 10; ++i3_inner) {
      for (int32_t i4_1 = 0; i4_1 < 4; ++i4_1) {
        int32_t cse_var_13 = (i3_inner * 4);
        int32_t cse_var_12 = (((i0_i1_fused_i2_fused_1 / 12) * 4) + i4_1);
        int32_t __1 = ((int32_t)(((((int64_t)(((int32_t*)conv2d_NCHWc_global_let)[(cse_var_13 + i4_1)] + ((int32_t*)fused_nn_contrib_conv2d_NCHWc_constant_2_let)[cse_var_12])) * ((int64_t)((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_6_let)[cse_var_12])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_8_let)[cse_var_12] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_8_let)[cse_var_12] + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        compute[(((i0_i1_fused_i2_fused_1 * 40) + cse_var_13) + i4_1)] = ((__2) > (-128) ? (__2) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip_cast(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_4_var, uint8_t* global_workspace_5_var) {
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_2_let = (&(global_const_workspace_4_var[54592]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_1_let = (&(global_const_workspace_4_var[54656]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_let = (&(global_const_workspace_4_var[54720]));
  void* fused_nn_contrib_conv2d_NCHWc_constant_let = (&(global_const_workspace_4_var[54336]));
  void* fused_constant_let = (&(global_const_workspace_4_var[50688]));
  void* data_pad_let = (&(global_workspace_5_var[31360]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 56; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 47; ++i3) {
      ((int16_t*)data_pad_let)[((i0_i1_fused_i2_fused * 47) + i3)] = (((((3 <= i0_i1_fused_i2_fused) && (i0_i1_fused_i2_fused < 52)) && (3 <= i3)) && (i3 < 43)) ? p0[(((i0_i1_fused_i2_fused * 40) + i3) - 123)] : (int16_t)0);
    }
  }
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 196; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_let = (&(global_workspace_5_var[36624]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[37264]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      for (int32_t oc_block_c_init = 0; oc_block_c_init < 4; ++oc_block_c_init) {
        ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c_init] = 0;
      }
      for (int32_t oc_block_c_init_1 = 0; oc_block_c_init_1 < 4; ++oc_block_c_init_1) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_1 + 4)] = 0;
      }
      for (int32_t oc_block_c_init_2 = 0; oc_block_c_init_2 < 4; ++oc_block_c_init_2) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_2 + 8)] = 0;
      }
      for (int32_t oc_block_c_init_3 = 0; oc_block_c_init_3 < 4; ++oc_block_c_init_3) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_3 + 12)] = 0;
      }
      for (int32_t oc_block_c_init_4 = 0; oc_block_c_init_4 < 4; ++oc_block_c_init_4) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_4 + 16)] = 0;
      }
      for (int32_t oc_block_c_init_5 = 0; oc_block_c_init_5 < 4; ++oc_block_c_init_5) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_5 + 20)] = 0;
      }
      for (int32_t oc_block_c_init_6 = 0; oc_block_c_init_6 < 4; ++oc_block_c_init_6) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_6 + 24)] = 0;
      }
      for (int32_t oc_block_c_init_7 = 0; oc_block_c_init_7 < 4; ++oc_block_c_init_7) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_7 + 28)] = 0;
      }
      for (int32_t oc_block_c_init_8 = 0; oc_block_c_init_8 < 4; ++oc_block_c_init_8) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_8 + 32)] = 0;
      }
      for (int32_t oc_block_c_init_9 = 0; oc_block_c_init_9 < 4; ++oc_block_c_init_9) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_9 + 36)] = 0;
      }
      for (int32_t oc_block_c_init_10 = 0; oc_block_c_init_10 < 4; ++oc_block_c_init_10) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_10 + 40)] = 0;
      }
      for (int32_t oc_block_c_init_11 = 0; oc_block_c_init_11 < 4; ++oc_block_c_init_11) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_11 + 44)] = 0;
      }
      for (int32_t oc_block_c_init_12 = 0; oc_block_c_init_12 < 4; ++oc_block_c_init_12) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_12 + 48)] = 0;
      }
      for (int32_t oc_block_c_init_13 = 0; oc_block_c_init_13 < 4; ++oc_block_c_init_13) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_13 + 52)] = 0;
      }
      for (int32_t oc_block_c_init_14 = 0; oc_block_c_init_14 < 4; ++oc_block_c_init_14) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_14 + 56)] = 0;
      }
      for (int32_t oc_block_c_init_15 = 0; oc_block_c_init_15 < 4; ++oc_block_c_init_15) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_15 + 60)] = 0;
      }
      for (int32_t oc_block_c_init_16 = 0; oc_block_c_init_16 < 4; ++oc_block_c_init_16) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_16 + 64)] = 0;
      }
      for (int32_t oc_block_c_init_17 = 0; oc_block_c_init_17 < 4; ++oc_block_c_init_17) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_17 + 68)] = 0;
      }
      for (int32_t oc_block_c_init_18 = 0; oc_block_c_init_18 < 4; ++oc_block_c_init_18) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_18 + 72)] = 0;
      }
      for (int32_t oc_block_c_init_19 = 0; oc_block_c_init_19 < 4; ++oc_block_c_init_19) {
        ((int32_t*)conv2d_NCHWc_global_let)[(oc_block_c_init_19 + 76)] = 0;
      }
      for (int32_t kh = 0; kh < 8; ++kh) {
        for (int32_t kw = 0; kw < 8; ++kw) {
          for (int32_t oc_block_c = 0; oc_block_c < 4; ++oc_block_c) {
            ((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] = (((int32_t*)conv2d_NCHWc_global_let)[oc_block_c] + (((int32_t)((int16_t*)data_pad_let)[((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c)])));
          }
          for (int32_t oc_block_c_1 = 0; oc_block_c_1 < 4; ++oc_block_c_1) {
            int32_t cse_var_1 = (oc_block_c_1 + 4);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_1] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_1] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 1)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_1)])));
          }
          for (int32_t oc_block_c_2 = 0; oc_block_c_2 < 4; ++oc_block_c_2) {
            int32_t cse_var_2 = (oc_block_c_2 + 8);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_2] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_2] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 2)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_2)])));
          }
          for (int32_t oc_block_c_3 = 0; oc_block_c_3 < 4; ++oc_block_c_3) {
            int32_t cse_var_3 = (oc_block_c_3 + 12);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_3] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 3)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_3)])));
          }
          for (int32_t oc_block_c_4 = 0; oc_block_c_4 < 4; ++oc_block_c_4) {
            int32_t cse_var_4 = (oc_block_c_4 + 16);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_4] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 4)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_4)])));
          }
          for (int32_t oc_block_c_5 = 0; oc_block_c_5 < 4; ++oc_block_c_5) {
            int32_t cse_var_5 = (oc_block_c_5 + 20);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_5] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 5)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_5)])));
          }
          for (int32_t oc_block_c_6 = 0; oc_block_c_6 < 4; ++oc_block_c_6) {
            int32_t cse_var_6 = (oc_block_c_6 + 24);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_6] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 6)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_6)])));
          }
          for (int32_t oc_block_c_7 = 0; oc_block_c_7 < 4; ++oc_block_c_7) {
            int32_t cse_var_7 = (oc_block_c_7 + 28);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_7] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 7)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_7)])));
          }
          for (int32_t oc_block_c_8 = 0; oc_block_c_8 < 4; ++oc_block_c_8) {
            int32_t cse_var_8 = (oc_block_c_8 + 32);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_8] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 8)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_8)])));
          }
          for (int32_t oc_block_c_9 = 0; oc_block_c_9 < 4; ++oc_block_c_9) {
            int32_t cse_var_9 = (oc_block_c_9 + 36);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_9] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 9)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_9)])));
          }
          for (int32_t oc_block_c_10 = 0; oc_block_c_10 < 4; ++oc_block_c_10) {
            int32_t cse_var_10 = (oc_block_c_10 + 40);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_10] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 10)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_10)])));
          }
          for (int32_t oc_block_c_11 = 0; oc_block_c_11 < 4; ++oc_block_c_11) {
            int32_t cse_var_11 = (oc_block_c_11 + 44);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_11] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 11)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_11)])));
          }
          for (int32_t oc_block_c_12 = 0; oc_block_c_12 < 4; ++oc_block_c_12) {
            int32_t cse_var_12 = (oc_block_c_12 + 48);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_12] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 12)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_12)])));
          }
          for (int32_t oc_block_c_13 = 0; oc_block_c_13 < 4; ++oc_block_c_13) {
            int32_t cse_var_13 = (oc_block_c_13 + 52);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_13] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 13)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_13)])));
          }
          for (int32_t oc_block_c_14 = 0; oc_block_c_14 < 4; ++oc_block_c_14) {
            int32_t cse_var_14 = (oc_block_c_14 + 56);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_14] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 14)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_14)])));
          }
          for (int32_t oc_block_c_15 = 0; oc_block_c_15 < 4; ++oc_block_c_15) {
            int32_t cse_var_15 = (oc_block_c_15 + 60);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_15] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 15)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_15)])));
          }
          for (int32_t oc_block_c_16 = 0; oc_block_c_16 < 4; ++oc_block_c_16) {
            int32_t cse_var_16 = (oc_block_c_16 + 64);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_16] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 16)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_16)])));
          }
          for (int32_t oc_block_c_17 = 0; oc_block_c_17 < 4; ++oc_block_c_17) {
            int32_t cse_var_17 = (oc_block_c_17 + 68);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_17] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 17)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_17)])));
          }
          for (int32_t oc_block_c_18 = 0; oc_block_c_18 < 4; ++oc_block_c_18) {
            int32_t cse_var_18 = (oc_block_c_18 + 72);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_18] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_18] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 18)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_18)])));
          }
          for (int32_t oc_block_c_19 = 0; oc_block_c_19 < 4; ++oc_block_c_19) {
            int32_t cse_var_19 = (oc_block_c_19 + 76);
            ((int32_t*)conv2d_NCHWc_global_let)[cse_var_19] = (((int32_t*)conv2d_NCHWc_global_let)[cse_var_19] + (((int32_t)((int16_t*)data_pad_let)[(((((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47)) + (ow_outer * 20)) + kw) + 19)]) * ((int32_t)((int16_t*)fused_constant_let)[(((((ax0_ax1_fused_ax2_fused / 49) * 256) + (kh * 32)) + (kw * 4)) + oc_block_c_19)])));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 20; ++ow_inner) {
        for (int32_t oc_block = 0; oc_block < 4; ++oc_block) {
          int32_t cse_var_20 = (ow_inner * 4);
          ((int32_t*)conv2d_NCHWc_let)[(((ow_outer * 80) + cse_var_20) + oc_block)] = ((int32_t*)conv2d_NCHWc_global_let)[(cse_var_20 + oc_block)];
        }
      }
    }
    for (int32_t ax3_outer = 0; ax3_outer < 2; ++ax3_outer) {
      for (int32_t ax3_inner = 0; ax3_inner < 20; ++ax3_inner) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_23 = (ax3_outer * 80);
          int32_t cse_var_22 = (ax3_inner * 4);
          int32_t cse_var_21 = (((ax0_ax1_fused_ax2_fused / 49) * 4) + ax4);
          int32_t __1 = ((int32_t)(((((int64_t)(((int32_t*)conv2d_NCHWc_let)[((cse_var_23 + cse_var_22) + ax4)] + ((int32_t*)fused_nn_contrib_conv2d_NCHWc_constant_let)[cse_var_21])) * ((int64_t)((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_let)[cse_var_21])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_2_let)[cse_var_21] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_2_let)[cse_var_21] + 31)))) - 128;
          int32_t __2 = (__1) < (127) ? (__1) : (127);
          T_cast[((((ax0_ax1_fused_ax2_fused * 160) + cse_var_23) + cse_var_22) + ax4)] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* fused_nn_contrib_dense_pack_constant_let = (&(global_const_workspace_18_var[54080]));
  void* fused_constant_3_let = (&(global_const_workspace_18_var[0]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 4; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_19_var[992]));
    for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 480; ++k_outer) {
      for (int32_t x_c = 0; x_c < 8; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_3_let)[(((ax1_outer_ax0_outer_fused * 3840) + (k_outer * 8)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 8) + ax1_inner_inner);
      int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_let)[cse_var_1]))) * (int64_t)1483316438) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
      int32_t __2 = (__1) < (127) ? (__1) : (127);
      T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_1(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_contrib_dense_pack_constant_1_let = (&(global_const_workspace_22_var[54208]));
  void* fused_constant_4_let = (&(global_const_workspace_22_var[52736]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_23_var[64]));
    for (int32_t x_c_init = 0; x_c_init < 8; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 32; ++k_outer) {
      for (int32_t x_c = 0; x_c < 8; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_4_let)[(((ax1_outer_ax0_outer_fused * 256) + (k_outer * 8)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 8; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 8) + ax1_inner_inner);
      int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_1_let)[cse_var_1]))) * (int64_t)1321827316) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
      int32_t __2 = (__1) < (127) ? (__1) : (127);
      T_cast[cse_var_1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_contrib_dense_pack_constant_2_let = (&(global_const_workspace_26_var[54976]));
  void* fused_constant_5_let = (&(global_const_workspace_26_var[53760]));
  for (int32_t ax1_outer_ax0_outer_fused = 0; ax1_outer_ax0_outer_fused < 2; ++ax1_outer_ax0_outer_fused) {
    void* compute_global_let = (&(global_workspace_27_var[80]));
    for (int32_t x_c_init = 0; x_c_init < 5; ++x_c_init) {
      ((int32_t*)compute_global_let)[x_c_init] = 0;
    }
    for (int32_t k_outer = 0; k_outer < 16; ++k_outer) {
      for (int32_t x_c = 0; x_c < 5; ++x_c) {
        ((int32_t*)compute_global_let)[x_c] = (((int32_t*)compute_global_let)[x_c] + (((int32_t)p0[k_outer]) * ((int32_t)((int16_t*)fused_constant_5_let)[(((ax1_outer_ax0_outer_fused * 80) + (k_outer * 5)) + x_c)])));
      }
    }
    for (int32_t ax1_inner_inner = 0; ax1_inner_inner < 5; ++ax1_inner_inner) {
      int32_t cse_var_1 = ((ax1_outer_ax0_outer_fused * 5) + ax1_inner_inner);
      int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_global_let)[ax1_inner_inner] + ((int32_t*)fused_nn_contrib_dense_pack_constant_2_let)[cse_var_1]))) * (int64_t)1349453042) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) + 34;
      int32_t __2 = (__1) < (127) ? (__1) : (127);
      T_multiply[cse_var_1] = (((float)(((__2) > (-128) ? (__2) : (-128)) - 34)) * 2.875707e-01f);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* pool_max_let = (&(global_workspace_7_var[38560]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 96; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
      for (int32_t ax4_init = 0; ax4_init < 4; ++ax4_init) {
        ((int8_t*)pool_max_let)[(((ax0_ax1_fused_ax2_fused * 80) + (ax3 * 4)) + ax4_init)] = (int8_t)-128;
      }
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 4; ++rv0_rv1_fused) {
        for (int32_t ax4 = 0; ax4 < 4; ++ax4) {
          int32_t cse_var_1 = (((ax0_ax1_fused_ax2_fused * 80) + (ax3 * 4)) + ax4);
          int8_t __1 = ((int8_t*)pool_max_let)[cse_var_1];
          int8_t __2 = p0[(((((((ax0_ax1_fused_ax2_fused / 24) * 7840) + ((ax0_ax1_fused_ax2_fused % 24) * 320)) + ((rv0_rv1_fused >> 1) * 160)) + (ax3 * 8)) + ((rv0_rv1_fused & 1) * 4)) + ax4)];
          ((int8_t*)pool_max_let)[cse_var_1] = ((__1) > (__2) ? (__1) : (__2));
        }
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 4; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 24; ++ax2) {
      for (int32_t ax3_1 = 0; ax3_1 < 20; ++ax3_1) {
        for (int32_t ax4_1 = 0; ax4_1 < 4; ++ax4_1) {
          int32_t cse_var_2 = ((((ax0_ax1_fused * 1920) + (ax2 * 80)) + (ax3_1 * 4)) + ax4_1);
          T_subtract[cse_var_2] = (((int16_t)((int8_t*)pool_max_let)[cse_var_2]) - (int16_t)-128);
        }
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_29_var[96]));
  void* T_softmax_exp_let = (&(global_workspace_29_var[48]));
  void* T_softmax_expsum_let = (&(global_workspace_29_var[0]));
  ((float*)T_softmax_maxelem_let)[0] = -3.402823e+38f;
  for (int32_t k = 0; k < 10; ++k) {
    float __1 = ((float*)T_softmax_maxelem_let)[0];
    float __2 = p0[k];
    ((float*)T_softmax_maxelem_let)[0] = ((__1) > (__2) ? (__1) : (__2));
  }
  for (int32_t i1 = 0; i1 < 10; ++i1) {
    ((float*)T_softmax_exp_let)[i1] = expf((p0[i1] - ((float*)T_softmax_maxelem_let)[0]));
  }
  ((float*)T_softmax_expsum_let)[0] = 0.000000e+00f;
  for (int32_t k_1 = 0; k_1 < 10; ++k_1) {
    ((float*)T_softmax_expsum_let)[0] = (((float*)T_softmax_expsum_let)[0] + ((float*)T_softmax_exp_let)[k_1]);
  }
  for (int32_t i1_1 = 0; i1_1 < 10; ++i1_1) {
    ((float*)T_softmax_exp_let)[i1_1] = (((float*)T_softmax_exp_let)[i1_1] / ((float*)T_softmax_expsum_let)[0]);
  }
  for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
    float __3 = roundf((((float*)T_softmax_exp_let)[ax1] * 2.560000e+02f)) + -1.280000e+02f;
    float __4 = (__3) < (1.270000e+02f) ? (__3) : (1.270000e+02f);
    T_cast[ax1] = ((int8_t)((__4) > (-1.280000e+02f) ? (__4) : (-1.280000e+02f)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 2; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      int32_t cse_var_1 = ((ax1_outer * 16) + ax1_inner);
      T_subtract[cse_var_1] = (((int16_t)p0[cse_var_1]) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract_1(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
  for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
    T_subtract[ax1_inner] = (((int16_t)p0[ax1_inner]) - (int16_t)-128);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_reshape_layout_transform_cast_subtract_layout_transform(int8_t* p0, int16_t* T_layout_trans, uint8_t* global_const_workspace_2_var, uint8_t* global_workspace_3_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 49; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 40; ++ax3) {
      int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 40) + ax3);
      T_layout_trans[cse_var_1] = (((int16_t)p0[cse_var_1]) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default___tvm_main__(int8_t* serving_default_input_0_buffer_var, int8_t* StatefulPartitionedCall_0_buffer_var, uint8_t* global_const_workspace_0_var, uint8_t* global_workspace_1_var) {
  void* sid_6_let = (&(global_workspace_1_var[0]));
  void* sid_4_let = (&(global_workspace_1_var[23200]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_3_let = (&(global_workspace_1_var[23200]));
  void* sid_5_let = (&(global_workspace_1_var[12368]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[960]));
  void* sid_8_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[960]));
  void* sid_13_let = (&(global_workspace_1_var[0]));
  void* sid_11_let = (&(global_workspace_1_var[96]));
  void* sid_12_let = (&(global_workspace_1_var[48]));
  if (tvmgen_default_fused_reshape_layout_transform_cast_subtract_layout_transform(serving_default_input_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_max_pool2d_cast_subtract(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_cast_cast_subtract(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip_1(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_cast(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_layout_transform_reshape_cast_subtract(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_cast_1(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_dense_pack_add_fixed_point_multiply_add_clip_subtract_cast_mult_1c9b307ace4645e7_(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(sid_13_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

