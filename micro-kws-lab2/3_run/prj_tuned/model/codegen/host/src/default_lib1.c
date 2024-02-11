// tvm target: c -keys=cpu 
#define TVM_EXPORTS
#include "tvm/runtime/c_runtime_api.h"
#include "tvm/runtime/c_backend_api.h"
#include <math.h>
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform(int16_t* p0, int16_t* T_layout_trans, uint8_t* global_const_workspace_8_var, uint8_t* global_workspace_9_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 24; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 16; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 320) + (ax3 * 16)) + ax4_inner)] = p0[(((ax4_inner * 480) + (ax0_ax1_fused_ax2_fused * 20)) + ax3)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_1(int16_t* p0, int16_t* T_layout_trans, uint8_t* global_const_workspace_14_var, uint8_t* global_workspace_15_var) {
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 12; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
      for (int32_t ax4_inner = 0; ax4_inner < 12; ++ax4_inner) {
        T_layout_trans[(((ax0_ax1_fused_ax2_fused * 120) + (ax3 * 12)) + ax4_inner)] = p0[(((ax4_inner * 120) + (ax0_ax1_fused_ax2_fused * 10)) + ax3)];
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_layout_transform_layout_transform_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_20_var, uint8_t* global_workspace_21_var) {
  for (int32_t ax1_outer = 0; ax1_outer < 30; ++ax1_outer) {
    for (int32_t ax1_inner = 0; ax1_inner < 16; ++ax1_inner) {
      T_subtract[((ax1_outer * 16) + ax1_inner)] = (((int16_t)p0[((ax1_inner * 30) + ax1_outer)]) - (int16_t)-128);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast(int32_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_18_var, uint8_t* global_workspace_19_var) {
  void* pool_sum_let = (&(global_workspace_19_var[7680]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 96; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 5; ++ax3) {
      ((int32_t*)pool_sum_let)[((ax0_ax1_fused_ax2_fused * 5) + ax3)] = 0;
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 4; ++rv0_rv1_fused) {
        int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 5) + ax3);
        ((int32_t*)pool_sum_let)[cse_var_1] = (((int32_t*)pool_sum_let)[cse_var_1] + p0[((((ax0_ax1_fused_ax2_fused * 20) + ((rv0_rv1_fused >> 1) * 10)) + (ax3 * 2)) + (rv0_rv1_fused & 1))]);
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 6; ++ax2) {
      for (int32_t ax3_1 = 0; ax3_1 < 5; ++ax3_1) {
        int32_t cse_var_2 = (((ax0_ax1_fused * 30) + (ax2 * 5)) + ax3_1);
        T_cast[cse_var_2] = ((int8_t)(((int32_t*)pool_sum_let)[cse_var_2] / 4));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_avg_pool2d_cast_cast_subtract(int32_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_12_var, uint8_t* global_workspace_13_var) {
  void* pool_sum_let = (&(global_workspace_13_var[0]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 144; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 10; ++ax3) {
      ((int32_t*)pool_sum_let)[((ax0_ax1_fused_ax2_fused * 10) + ax3)] = 0;
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 4; ++rv0_rv1_fused) {
        int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 10) + ax3);
        ((int32_t*)pool_sum_let)[cse_var_1] = (((int32_t*)pool_sum_let)[cse_var_1] + p0[((((ax0_ax1_fused_ax2_fused * 40) + ((rv0_rv1_fused >> 1) * 20)) + (ax3 * 2)) + (rv0_rv1_fused & 1))]);
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 12; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 12; ++ax2) {
      for (int32_t ax3_1 = 0; ax3_1 < 10; ++ax3_1) {
        int32_t cse_var_2 = (((ax0_ax1_fused * 120) + (ax2 * 10)) + ax3_1);
        T_subtract[cse_var_2] = (((int16_t)((int8_t)(((int32_t*)pool_sum_let)[cse_var_2] / 4))) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip(int16_t* p0, int32_t* compute, uint8_t* global_const_workspace_10_var, uint8_t* global_workspace_11_var) {
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_5_let = (&(global_const_workspace_10_var[54832]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_4_let = (&(global_const_workspace_10_var[54880]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_3_let = (&(global_const_workspace_10_var[54928]));
  void* fused_nn_contrib_conv2d_NCHWc_constant_1_let = (&(global_const_workspace_10_var[54784]));
  void* fused_constant_1_let = (&(global_const_workspace_10_var[30720]));
  void* data_pad_let = (&(global_workspace_11_var[0]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 29; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 25; ++i3) {
      for (int32_t i4 = 0; i4 < 16; ++i4) {
        int32_t cse_var_1 = (i3 * 16);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 400) + cse_var_1) + i4)] = (((((2 <= i0_i1_fused_i2_fused) && (i0_i1_fused_i2_fused < 26)) && (2 <= i3)) && (i3 < 22)) ? p0[((((i0_i1_fused_i2_fused * 320) + cse_var_1) + i4) - 672)] : (int16_t)0);
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 288; ++i0_i1_fused_i2_fused_1) {
    void* conv2d_NCHWc_let = (&(global_workspace_11_var[46240]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_11_var[46320]));
    for (int32_t ow_outer = 0; ow_outer < 5; ++ow_outer) {
      ((int32_t*)conv2d_NCHWc_global_let)[0] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[1] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[2] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[3] = 0;
      for (int32_t kh = 0; kh < 6; ++kh) {
        for (int32_t ic_inner = 0; ic_inner < 16; ++ic_inner) {
          int32_t cse_var_15 = ((((i0_i1_fused_i2_fused_1 / 24) * 576) + (kh * 96)) + ic_inner);
          int32_t cse_var_14 = (cse_var_15 + 80);
          int32_t cse_var_13 = (cse_var_15 + 64);
          int32_t cse_var_12 = (cse_var_15 + 48);
          int32_t cse_var_11 = (cse_var_15 + 32);
          int32_t cse_var_10 = (cse_var_15 + 16);
          int32_t cse_var_9 = ((((kh * 400) + ((i0_i1_fused_i2_fused_1 % 24) * 400)) + (ow_outer * 64)) + ic_inner);
          int32_t cse_var_8 = (cse_var_9 + 96);
          int32_t cse_var_7 = (cse_var_9 + 80);
          int32_t cse_var_6 = (cse_var_9 + 64);
          int32_t cse_var_5 = (cse_var_9 + 48);
          int32_t cse_var_4 = (cse_var_9 + 32);
          int32_t cse_var_3 = (cse_var_9 + 16);
          int32_t cse_var_2 = (cse_var_9 + 112);
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_15])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_3]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_15])));
          ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_4]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_15])));
          ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_5]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_15])));
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_3]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_10])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_4]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_10])));
          ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_5]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_10])));
          ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_6]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_10])));
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_4]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_11])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_5]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_11])));
          ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_6]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_11])));
          ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_7]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_11])));
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_5]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_12])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_6]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_12])));
          ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_7]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_12])));
          ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_8]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_12])));
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_6]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_13])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_7]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_13])));
          ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_8]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_13])));
          ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_2]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_13])));
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_7]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_14])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_8]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_14])));
          ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_2]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_14])));
          ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_9 + 128)]) * ((int32_t)((int16_t*)fused_constant_1_let)[cse_var_14])));
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 4; ++ow_inner) {
        ((int32_t*)conv2d_NCHWc_let)[((ow_outer * 4) + ow_inner)] = ((int32_t*)conv2d_NCHWc_global_let)[ow_inner];
      }
    }
    for (int32_t i3_outer = 0; i3_outer < 5; ++i3_outer) {
      for (int32_t i3_inner = 0; i3_inner < 4; ++i3_inner) {
        int32_t cse_var_17 = (i3_outer * 4);
        int32_t cse_var_16 = (i0_i1_fused_i2_fused_1 / 24);
        int32_t __1 = ((int32_t)(((((int64_t)(((int32_t*)conv2d_NCHWc_let)[(cse_var_17 + i3_inner)] + ((int32_t*)fused_nn_contrib_conv2d_NCHWc_constant_1_let)[cse_var_16])) * ((int64_t)((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_3_let)[cse_var_16])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_5_let)[cse_var_16] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_5_let)[cse_var_16] + 31)))) - 128;
        int32_t __2 = (__1) < (127) ? (__1) : (127);
        compute[(((i0_i1_fused_i2_fused_1 * 20) + cse_var_17) + i3_inner)] = ((__2) > (-128) ? (__2) : (-128));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip_1(int16_t* p0, int32_t* compute, uint8_t* global_const_workspace_16_var, uint8_t* global_workspace_17_var) {
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_8_let = (&(global_const_workspace_16_var[54400]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_7_let = (&(global_const_workspace_16_var[54464]));
  void* fused_nn_contrib_conv2d_NCHWc_add_constant_6_let = (&(global_const_workspace_16_var[54528]));
  void* fused_nn_contrib_conv2d_NCHWc_constant_2_let = (&(global_const_workspace_16_var[54272]));
  void* fused_constant_2_let = (&(global_const_workspace_16_var[44544]));
  void* data_pad_let = (&(global_workspace_17_var[7680]));
  for (int32_t i0_i1_fused_i2_fused = 0; i0_i1_fused_i2_fused < 15; ++i0_i1_fused_i2_fused) {
    for (int32_t i3 = 0; i3 < 13; ++i3) {
      for (int32_t i4 = 0; i4 < 12; ++i4) {
        int32_t cse_var_1 = (i3 * 12);
        ((int16_t*)data_pad_let)[(((i0_i1_fused_i2_fused * 156) + cse_var_1) + i4)] = (((((1 <= i0_i1_fused_i2_fused) && (i0_i1_fused_i2_fused < 13)) && (1 <= i3)) && (i3 < 11)) ? p0[((((i0_i1_fused_i2_fused * 120) + cse_var_1) + i4) - 132)] : (int16_t)0);
      }
    }
  }
  for (int32_t i0_i1_fused_i2_fused_1 = 0; i0_i1_fused_i2_fused_1 < 192; ++i0_i1_fused_i2_fused_1) {
    void* conv2d_NCHWc_let = (&(global_workspace_17_var[12368]));
    void* conv2d_NCHWc_global_let = (&(global_workspace_17_var[12416]));
    for (int32_t ow_outer = 0; ow_outer < 2; ++ow_outer) {
      ((int32_t*)conv2d_NCHWc_global_let)[0] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[1] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[2] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[3] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[4] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[5] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[6] = 0;
      ((int32_t*)conv2d_NCHWc_global_let)[7] = 0;
      for (int32_t kh = 0; kh < 4; ++kh) {
        for (int32_t ic_inner = 0; ic_inner < 12; ++ic_inner) {
          int32_t cse_var_9 = ((((i0_i1_fused_i2_fused_1 / 12) * 192) + (kh * 48)) + ic_inner);
          int32_t cse_var_8 = (cse_var_9 + 36);
          int32_t cse_var_7 = (cse_var_9 + 24);
          int32_t cse_var_6 = (cse_var_9 + 12);
          int32_t cse_var_5 = ((((kh * 156) + ((i0_i1_fused_i2_fused_1 % 12) * 156)) + (ow_outer * 96)) + ic_inner);
          int32_t cse_var_4 = (cse_var_5 + 36);
          int32_t cse_var_3 = (cse_var_5 + 24);
          int32_t cse_var_2 = (cse_var_5 + 12);
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_5]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_9])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_2]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_9])));
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_3]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_9])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_4]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_9])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 48)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_9])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 60)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_9])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 72)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_9])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 84)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_9])));
          }
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_2]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_6])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_3]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_6])));
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_4]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_6])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 48)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_6])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 60)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_6])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 72)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_6])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 84)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_6])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 96)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_6])));
          }
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_3]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_7])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_4]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_7])));
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 48)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_7])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 60)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_7])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 72)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_7])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 84)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_7])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 96)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_7])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 108)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_7])));
          }
          ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_4]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_8])));
          ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 48)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_8])));
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 60)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_8])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 72)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_8])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 84)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_8])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 96)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_8])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 108)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_8])));
          }
          if (ow_outer < 1) {
            ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_5 + 120)]) * ((int32_t)((int16_t*)fused_constant_2_let)[cse_var_8])));
          }
        }
      }
      for (int32_t ow_inner = 0; ow_inner < 8; ++ow_inner) {
        if (((ow_outer * 4) + (ow_inner >> 1)) < 5) {
          ((int32_t*)conv2d_NCHWc_let)[((ow_outer * 8) + ow_inner)] = ((int32_t*)conv2d_NCHWc_global_let)[ow_inner];
        }
      }
    }
    for (int32_t i3_outer = 0; i3_outer < 2; ++i3_outer) {
      for (int32_t i3_inner = 0; i3_inner < 8; ++i3_inner) {
        if (((i3_outer * 4) + (i3_inner >> 1)) < 5) {
          int32_t cse_var_11 = (i3_outer * 8);
          int32_t cse_var_10 = (i0_i1_fused_i2_fused_1 / 12);
          int32_t __1 = ((int32_t)(((((int64_t)(((int32_t*)conv2d_NCHWc_let)[(cse_var_11 + i3_inner)] + ((int32_t*)fused_nn_contrib_conv2d_NCHWc_constant_2_let)[cse_var_10])) * ((int64_t)((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_6_let)[cse_var_10])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_8_let)[cse_var_10] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_8_let)[cse_var_10] + 31)))) - 128;
          int32_t __2 = (__1) < (127) ? (__1) : (127);
          compute[(((i0_i1_fused_i2_fused_1 * 10) + cse_var_11) + i3_inner)] = ((__2) > (-128) ? (__2) : (-128));
        }
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
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 784; ++ax0_ax1_fused_ax2_fused) {
    void* conv2d_NCHWc_global_let = (&(global_workspace_5_var[36624]));
    ((int32_t*)conv2d_NCHWc_global_let)[0] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[1] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[2] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[3] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[4] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[5] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[6] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[7] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[8] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[9] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[10] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[11] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[12] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[13] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[14] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[15] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[16] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[17] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[18] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[19] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[20] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[21] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[22] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[23] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[24] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[25] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[26] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[27] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[28] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[29] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[30] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[31] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[32] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[33] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[34] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[35] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[36] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[37] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[38] = 0;
    ((int32_t*)conv2d_NCHWc_global_let)[39] = 0;
    for (int32_t kh = 0; kh < 8; ++kh) {
      int32_t cse_var_54 = ((kh * 47) + ((ax0_ax1_fused_ax2_fused % 49) * 47));
      int32_t cse_var_53 = (((ax0_ax1_fused_ax2_fused / 49) * 64) + (kh * 8));
      int32_t cse_var_52 = (cse_var_54 + 9);
      int32_t cse_var_51 = (cse_var_54 + 8);
      int32_t cse_var_50 = (cse_var_54 + 7);
      int32_t cse_var_49 = (cse_var_54 + 6);
      int32_t cse_var_48 = (cse_var_54 + 5);
      int32_t cse_var_47 = (cse_var_54 + 45);
      int32_t cse_var_46 = (cse_var_54 + 44);
      int32_t cse_var_45 = (cse_var_54 + 43);
      int32_t cse_var_44 = (cse_var_54 + 42);
      int32_t cse_var_43 = (cse_var_54 + 41);
      int32_t cse_var_42 = (cse_var_54 + 40);
      int32_t cse_var_41 = (cse_var_54 + 4);
      int32_t cse_var_40 = (cse_var_54 + 39);
      int32_t cse_var_39 = (cse_var_54 + 38);
      int32_t cse_var_38 = (cse_var_54 + 37);
      int32_t cse_var_37 = (cse_var_54 + 36);
      int32_t cse_var_36 = (cse_var_54 + 35);
      int32_t cse_var_35 = (cse_var_54 + 34);
      int32_t cse_var_34 = (cse_var_54 + 33);
      int32_t cse_var_33 = (cse_var_54 + 32);
      int32_t cse_var_32 = (cse_var_54 + 31);
      int32_t cse_var_31 = (cse_var_54 + 30);
      int32_t cse_var_30 = (cse_var_54 + 3);
      int32_t cse_var_29 = (cse_var_54 + 29);
      int32_t cse_var_28 = (cse_var_54 + 28);
      int32_t cse_var_27 = (cse_var_54 + 27);
      int32_t cse_var_26 = (cse_var_54 + 26);
      int32_t cse_var_25 = (cse_var_54 + 25);
      int32_t cse_var_24 = (cse_var_54 + 24);
      int32_t cse_var_23 = (cse_var_54 + 23);
      int32_t cse_var_22 = (cse_var_54 + 22);
      int32_t cse_var_21 = (cse_var_54 + 21);
      int32_t cse_var_20 = (cse_var_54 + 20);
      int32_t cse_var_19 = (cse_var_54 + 2);
      int32_t cse_var_18 = (cse_var_54 + 19);
      int32_t cse_var_17 = (cse_var_54 + 18);
      int32_t cse_var_16 = (cse_var_54 + 17);
      int32_t cse_var_15 = (cse_var_54 + 16);
      int32_t cse_var_14 = (cse_var_54 + 15);
      int32_t cse_var_13 = (cse_var_54 + 14);
      int32_t cse_var_12 = (cse_var_54 + 13);
      int32_t cse_var_11 = (cse_var_54 + 12);
      int32_t cse_var_10 = (cse_var_54 + 11);
      int32_t cse_var_9 = (cse_var_54 + 10);
      int32_t cse_var_8 = (cse_var_54 + 1);
      int32_t cse_var_7 = (cse_var_53 + 7);
      int32_t cse_var_6 = (cse_var_53 + 6);
      int32_t cse_var_5 = (cse_var_53 + 5);
      int32_t cse_var_4 = (cse_var_53 + 4);
      int32_t cse_var_3 = (cse_var_53 + 3);
      int32_t cse_var_2 = (cse_var_53 + 2);
      int32_t cse_var_1 = (cse_var_53 + 1);
      ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_54]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_8]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_19]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_30]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[cse_var_41]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[cse_var_48]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[cse_var_49]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[cse_var_50]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[8] = (((int32_t*)conv2d_NCHWc_global_let)[8] + (((int32_t)((int16_t*)data_pad_let)[cse_var_51]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[9] = (((int32_t*)conv2d_NCHWc_global_let)[9] + (((int32_t)((int16_t*)data_pad_let)[cse_var_52]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[10] = (((int32_t*)conv2d_NCHWc_global_let)[10] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[11] = (((int32_t*)conv2d_NCHWc_global_let)[11] + (((int32_t)((int16_t*)data_pad_let)[cse_var_10]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[12] = (((int32_t*)conv2d_NCHWc_global_let)[12] + (((int32_t)((int16_t*)data_pad_let)[cse_var_11]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[13] = (((int32_t*)conv2d_NCHWc_global_let)[13] + (((int32_t)((int16_t*)data_pad_let)[cse_var_12]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[14] = (((int32_t*)conv2d_NCHWc_global_let)[14] + (((int32_t)((int16_t*)data_pad_let)[cse_var_13]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[15] = (((int32_t*)conv2d_NCHWc_global_let)[15] + (((int32_t)((int16_t*)data_pad_let)[cse_var_14]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[16] = (((int32_t*)conv2d_NCHWc_global_let)[16] + (((int32_t)((int16_t*)data_pad_let)[cse_var_15]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[17] = (((int32_t*)conv2d_NCHWc_global_let)[17] + (((int32_t)((int16_t*)data_pad_let)[cse_var_16]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[18] = (((int32_t*)conv2d_NCHWc_global_let)[18] + (((int32_t)((int16_t*)data_pad_let)[cse_var_17]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[19] = (((int32_t*)conv2d_NCHWc_global_let)[19] + (((int32_t)((int16_t*)data_pad_let)[cse_var_18]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[20] = (((int32_t*)conv2d_NCHWc_global_let)[20] + (((int32_t)((int16_t*)data_pad_let)[cse_var_20]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[21] = (((int32_t*)conv2d_NCHWc_global_let)[21] + (((int32_t)((int16_t*)data_pad_let)[cse_var_21]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[22] = (((int32_t*)conv2d_NCHWc_global_let)[22] + (((int32_t)((int16_t*)data_pad_let)[cse_var_22]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[23] = (((int32_t*)conv2d_NCHWc_global_let)[23] + (((int32_t)((int16_t*)data_pad_let)[cse_var_23]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[24] = (((int32_t*)conv2d_NCHWc_global_let)[24] + (((int32_t)((int16_t*)data_pad_let)[cse_var_24]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[25] = (((int32_t*)conv2d_NCHWc_global_let)[25] + (((int32_t)((int16_t*)data_pad_let)[cse_var_25]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[26] = (((int32_t*)conv2d_NCHWc_global_let)[26] + (((int32_t)((int16_t*)data_pad_let)[cse_var_26]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[27] = (((int32_t*)conv2d_NCHWc_global_let)[27] + (((int32_t)((int16_t*)data_pad_let)[cse_var_27]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[28] = (((int32_t*)conv2d_NCHWc_global_let)[28] + (((int32_t)((int16_t*)data_pad_let)[cse_var_28]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[29] = (((int32_t*)conv2d_NCHWc_global_let)[29] + (((int32_t)((int16_t*)data_pad_let)[cse_var_29]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[30] = (((int32_t*)conv2d_NCHWc_global_let)[30] + (((int32_t)((int16_t*)data_pad_let)[cse_var_31]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[31] = (((int32_t*)conv2d_NCHWc_global_let)[31] + (((int32_t)((int16_t*)data_pad_let)[cse_var_32]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[32] = (((int32_t*)conv2d_NCHWc_global_let)[32] + (((int32_t)((int16_t*)data_pad_let)[cse_var_33]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[33] = (((int32_t*)conv2d_NCHWc_global_let)[33] + (((int32_t)((int16_t*)data_pad_let)[cse_var_34]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[34] = (((int32_t*)conv2d_NCHWc_global_let)[34] + (((int32_t)((int16_t*)data_pad_let)[cse_var_35]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[35] = (((int32_t*)conv2d_NCHWc_global_let)[35] + (((int32_t)((int16_t*)data_pad_let)[cse_var_36]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[36] = (((int32_t*)conv2d_NCHWc_global_let)[36] + (((int32_t)((int16_t*)data_pad_let)[cse_var_37]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[37] = (((int32_t*)conv2d_NCHWc_global_let)[37] + (((int32_t)((int16_t*)data_pad_let)[cse_var_38]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[38] = (((int32_t*)conv2d_NCHWc_global_let)[38] + (((int32_t)((int16_t*)data_pad_let)[cse_var_39]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[39] = (((int32_t*)conv2d_NCHWc_global_let)[39] + (((int32_t)((int16_t*)data_pad_let)[cse_var_40]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_53])));
      ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_8]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_19]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_30]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_41]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[cse_var_48]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[cse_var_49]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[cse_var_50]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[cse_var_51]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[8] = (((int32_t*)conv2d_NCHWc_global_let)[8] + (((int32_t)((int16_t*)data_pad_let)[cse_var_52]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[9] = (((int32_t*)conv2d_NCHWc_global_let)[9] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[10] = (((int32_t*)conv2d_NCHWc_global_let)[10] + (((int32_t)((int16_t*)data_pad_let)[cse_var_10]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[11] = (((int32_t*)conv2d_NCHWc_global_let)[11] + (((int32_t)((int16_t*)data_pad_let)[cse_var_11]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[12] = (((int32_t*)conv2d_NCHWc_global_let)[12] + (((int32_t)((int16_t*)data_pad_let)[cse_var_12]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[13] = (((int32_t*)conv2d_NCHWc_global_let)[13] + (((int32_t)((int16_t*)data_pad_let)[cse_var_13]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[14] = (((int32_t*)conv2d_NCHWc_global_let)[14] + (((int32_t)((int16_t*)data_pad_let)[cse_var_14]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[15] = (((int32_t*)conv2d_NCHWc_global_let)[15] + (((int32_t)((int16_t*)data_pad_let)[cse_var_15]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[16] = (((int32_t*)conv2d_NCHWc_global_let)[16] + (((int32_t)((int16_t*)data_pad_let)[cse_var_16]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[17] = (((int32_t*)conv2d_NCHWc_global_let)[17] + (((int32_t)((int16_t*)data_pad_let)[cse_var_17]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[18] = (((int32_t*)conv2d_NCHWc_global_let)[18] + (((int32_t)((int16_t*)data_pad_let)[cse_var_18]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[19] = (((int32_t*)conv2d_NCHWc_global_let)[19] + (((int32_t)((int16_t*)data_pad_let)[cse_var_20]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[20] = (((int32_t*)conv2d_NCHWc_global_let)[20] + (((int32_t)((int16_t*)data_pad_let)[cse_var_21]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[21] = (((int32_t*)conv2d_NCHWc_global_let)[21] + (((int32_t)((int16_t*)data_pad_let)[cse_var_22]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[22] = (((int32_t*)conv2d_NCHWc_global_let)[22] + (((int32_t)((int16_t*)data_pad_let)[cse_var_23]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[23] = (((int32_t*)conv2d_NCHWc_global_let)[23] + (((int32_t)((int16_t*)data_pad_let)[cse_var_24]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[24] = (((int32_t*)conv2d_NCHWc_global_let)[24] + (((int32_t)((int16_t*)data_pad_let)[cse_var_25]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[25] = (((int32_t*)conv2d_NCHWc_global_let)[25] + (((int32_t)((int16_t*)data_pad_let)[cse_var_26]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[26] = (((int32_t*)conv2d_NCHWc_global_let)[26] + (((int32_t)((int16_t*)data_pad_let)[cse_var_27]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[27] = (((int32_t*)conv2d_NCHWc_global_let)[27] + (((int32_t)((int16_t*)data_pad_let)[cse_var_28]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[28] = (((int32_t*)conv2d_NCHWc_global_let)[28] + (((int32_t)((int16_t*)data_pad_let)[cse_var_29]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[29] = (((int32_t*)conv2d_NCHWc_global_let)[29] + (((int32_t)((int16_t*)data_pad_let)[cse_var_31]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[30] = (((int32_t*)conv2d_NCHWc_global_let)[30] + (((int32_t)((int16_t*)data_pad_let)[cse_var_32]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[31] = (((int32_t*)conv2d_NCHWc_global_let)[31] + (((int32_t)((int16_t*)data_pad_let)[cse_var_33]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[32] = (((int32_t*)conv2d_NCHWc_global_let)[32] + (((int32_t)((int16_t*)data_pad_let)[cse_var_34]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[33] = (((int32_t*)conv2d_NCHWc_global_let)[33] + (((int32_t)((int16_t*)data_pad_let)[cse_var_35]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[34] = (((int32_t*)conv2d_NCHWc_global_let)[34] + (((int32_t)((int16_t*)data_pad_let)[cse_var_36]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[35] = (((int32_t*)conv2d_NCHWc_global_let)[35] + (((int32_t)((int16_t*)data_pad_let)[cse_var_37]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[36] = (((int32_t*)conv2d_NCHWc_global_let)[36] + (((int32_t)((int16_t*)data_pad_let)[cse_var_38]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[37] = (((int32_t*)conv2d_NCHWc_global_let)[37] + (((int32_t)((int16_t*)data_pad_let)[cse_var_39]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[38] = (((int32_t*)conv2d_NCHWc_global_let)[38] + (((int32_t)((int16_t*)data_pad_let)[cse_var_40]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[39] = (((int32_t*)conv2d_NCHWc_global_let)[39] + (((int32_t)((int16_t*)data_pad_let)[cse_var_42]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_1])));
      ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_19]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_30]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_41]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_48]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[cse_var_49]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[cse_var_50]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[cse_var_51]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[cse_var_52]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[8] = (((int32_t*)conv2d_NCHWc_global_let)[8] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[9] = (((int32_t*)conv2d_NCHWc_global_let)[9] + (((int32_t)((int16_t*)data_pad_let)[cse_var_10]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[10] = (((int32_t*)conv2d_NCHWc_global_let)[10] + (((int32_t)((int16_t*)data_pad_let)[cse_var_11]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[11] = (((int32_t*)conv2d_NCHWc_global_let)[11] + (((int32_t)((int16_t*)data_pad_let)[cse_var_12]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[12] = (((int32_t*)conv2d_NCHWc_global_let)[12] + (((int32_t)((int16_t*)data_pad_let)[cse_var_13]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[13] = (((int32_t*)conv2d_NCHWc_global_let)[13] + (((int32_t)((int16_t*)data_pad_let)[cse_var_14]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[14] = (((int32_t*)conv2d_NCHWc_global_let)[14] + (((int32_t)((int16_t*)data_pad_let)[cse_var_15]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[15] = (((int32_t*)conv2d_NCHWc_global_let)[15] + (((int32_t)((int16_t*)data_pad_let)[cse_var_16]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[16] = (((int32_t*)conv2d_NCHWc_global_let)[16] + (((int32_t)((int16_t*)data_pad_let)[cse_var_17]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[17] = (((int32_t*)conv2d_NCHWc_global_let)[17] + (((int32_t)((int16_t*)data_pad_let)[cse_var_18]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[18] = (((int32_t*)conv2d_NCHWc_global_let)[18] + (((int32_t)((int16_t*)data_pad_let)[cse_var_20]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[19] = (((int32_t*)conv2d_NCHWc_global_let)[19] + (((int32_t)((int16_t*)data_pad_let)[cse_var_21]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[20] = (((int32_t*)conv2d_NCHWc_global_let)[20] + (((int32_t)((int16_t*)data_pad_let)[cse_var_22]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[21] = (((int32_t*)conv2d_NCHWc_global_let)[21] + (((int32_t)((int16_t*)data_pad_let)[cse_var_23]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[22] = (((int32_t*)conv2d_NCHWc_global_let)[22] + (((int32_t)((int16_t*)data_pad_let)[cse_var_24]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[23] = (((int32_t*)conv2d_NCHWc_global_let)[23] + (((int32_t)((int16_t*)data_pad_let)[cse_var_25]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[24] = (((int32_t*)conv2d_NCHWc_global_let)[24] + (((int32_t)((int16_t*)data_pad_let)[cse_var_26]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[25] = (((int32_t*)conv2d_NCHWc_global_let)[25] + (((int32_t)((int16_t*)data_pad_let)[cse_var_27]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[26] = (((int32_t*)conv2d_NCHWc_global_let)[26] + (((int32_t)((int16_t*)data_pad_let)[cse_var_28]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[27] = (((int32_t*)conv2d_NCHWc_global_let)[27] + (((int32_t)((int16_t*)data_pad_let)[cse_var_29]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[28] = (((int32_t*)conv2d_NCHWc_global_let)[28] + (((int32_t)((int16_t*)data_pad_let)[cse_var_31]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[29] = (((int32_t*)conv2d_NCHWc_global_let)[29] + (((int32_t)((int16_t*)data_pad_let)[cse_var_32]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[30] = (((int32_t*)conv2d_NCHWc_global_let)[30] + (((int32_t)((int16_t*)data_pad_let)[cse_var_33]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[31] = (((int32_t*)conv2d_NCHWc_global_let)[31] + (((int32_t)((int16_t*)data_pad_let)[cse_var_34]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[32] = (((int32_t*)conv2d_NCHWc_global_let)[32] + (((int32_t)((int16_t*)data_pad_let)[cse_var_35]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[33] = (((int32_t*)conv2d_NCHWc_global_let)[33] + (((int32_t)((int16_t*)data_pad_let)[cse_var_36]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[34] = (((int32_t*)conv2d_NCHWc_global_let)[34] + (((int32_t)((int16_t*)data_pad_let)[cse_var_37]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[35] = (((int32_t*)conv2d_NCHWc_global_let)[35] + (((int32_t)((int16_t*)data_pad_let)[cse_var_38]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[36] = (((int32_t*)conv2d_NCHWc_global_let)[36] + (((int32_t)((int16_t*)data_pad_let)[cse_var_39]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[37] = (((int32_t*)conv2d_NCHWc_global_let)[37] + (((int32_t)((int16_t*)data_pad_let)[cse_var_40]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[38] = (((int32_t*)conv2d_NCHWc_global_let)[38] + (((int32_t)((int16_t*)data_pad_let)[cse_var_42]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[39] = (((int32_t*)conv2d_NCHWc_global_let)[39] + (((int32_t)((int16_t*)data_pad_let)[cse_var_43]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_2])));
      ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_30]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_41]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_48]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_49]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[cse_var_50]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[cse_var_51]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[cse_var_52]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[8] = (((int32_t*)conv2d_NCHWc_global_let)[8] + (((int32_t)((int16_t*)data_pad_let)[cse_var_10]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[9] = (((int32_t*)conv2d_NCHWc_global_let)[9] + (((int32_t)((int16_t*)data_pad_let)[cse_var_11]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[10] = (((int32_t*)conv2d_NCHWc_global_let)[10] + (((int32_t)((int16_t*)data_pad_let)[cse_var_12]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[11] = (((int32_t*)conv2d_NCHWc_global_let)[11] + (((int32_t)((int16_t*)data_pad_let)[cse_var_13]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[12] = (((int32_t*)conv2d_NCHWc_global_let)[12] + (((int32_t)((int16_t*)data_pad_let)[cse_var_14]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[13] = (((int32_t*)conv2d_NCHWc_global_let)[13] + (((int32_t)((int16_t*)data_pad_let)[cse_var_15]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[14] = (((int32_t*)conv2d_NCHWc_global_let)[14] + (((int32_t)((int16_t*)data_pad_let)[cse_var_16]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[15] = (((int32_t*)conv2d_NCHWc_global_let)[15] + (((int32_t)((int16_t*)data_pad_let)[cse_var_17]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[16] = (((int32_t*)conv2d_NCHWc_global_let)[16] + (((int32_t)((int16_t*)data_pad_let)[cse_var_18]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[17] = (((int32_t*)conv2d_NCHWc_global_let)[17] + (((int32_t)((int16_t*)data_pad_let)[cse_var_20]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[18] = (((int32_t*)conv2d_NCHWc_global_let)[18] + (((int32_t)((int16_t*)data_pad_let)[cse_var_21]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[19] = (((int32_t*)conv2d_NCHWc_global_let)[19] + (((int32_t)((int16_t*)data_pad_let)[cse_var_22]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[20] = (((int32_t*)conv2d_NCHWc_global_let)[20] + (((int32_t)((int16_t*)data_pad_let)[cse_var_23]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[21] = (((int32_t*)conv2d_NCHWc_global_let)[21] + (((int32_t)((int16_t*)data_pad_let)[cse_var_24]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[22] = (((int32_t*)conv2d_NCHWc_global_let)[22] + (((int32_t)((int16_t*)data_pad_let)[cse_var_25]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[23] = (((int32_t*)conv2d_NCHWc_global_let)[23] + (((int32_t)((int16_t*)data_pad_let)[cse_var_26]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[24] = (((int32_t*)conv2d_NCHWc_global_let)[24] + (((int32_t)((int16_t*)data_pad_let)[cse_var_27]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[25] = (((int32_t*)conv2d_NCHWc_global_let)[25] + (((int32_t)((int16_t*)data_pad_let)[cse_var_28]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[26] = (((int32_t*)conv2d_NCHWc_global_let)[26] + (((int32_t)((int16_t*)data_pad_let)[cse_var_29]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[27] = (((int32_t*)conv2d_NCHWc_global_let)[27] + (((int32_t)((int16_t*)data_pad_let)[cse_var_31]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[28] = (((int32_t*)conv2d_NCHWc_global_let)[28] + (((int32_t)((int16_t*)data_pad_let)[cse_var_32]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[29] = (((int32_t*)conv2d_NCHWc_global_let)[29] + (((int32_t)((int16_t*)data_pad_let)[cse_var_33]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[30] = (((int32_t*)conv2d_NCHWc_global_let)[30] + (((int32_t)((int16_t*)data_pad_let)[cse_var_34]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[31] = (((int32_t*)conv2d_NCHWc_global_let)[31] + (((int32_t)((int16_t*)data_pad_let)[cse_var_35]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[32] = (((int32_t*)conv2d_NCHWc_global_let)[32] + (((int32_t)((int16_t*)data_pad_let)[cse_var_36]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[33] = (((int32_t*)conv2d_NCHWc_global_let)[33] + (((int32_t)((int16_t*)data_pad_let)[cse_var_37]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[34] = (((int32_t*)conv2d_NCHWc_global_let)[34] + (((int32_t)((int16_t*)data_pad_let)[cse_var_38]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[35] = (((int32_t*)conv2d_NCHWc_global_let)[35] + (((int32_t)((int16_t*)data_pad_let)[cse_var_39]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[36] = (((int32_t*)conv2d_NCHWc_global_let)[36] + (((int32_t)((int16_t*)data_pad_let)[cse_var_40]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[37] = (((int32_t*)conv2d_NCHWc_global_let)[37] + (((int32_t)((int16_t*)data_pad_let)[cse_var_42]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[38] = (((int32_t*)conv2d_NCHWc_global_let)[38] + (((int32_t)((int16_t*)data_pad_let)[cse_var_43]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[39] = (((int32_t*)conv2d_NCHWc_global_let)[39] + (((int32_t)((int16_t*)data_pad_let)[cse_var_44]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_3])));
      ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_41]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_48]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_49]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_50]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[cse_var_51]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[cse_var_52]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[cse_var_10]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[8] = (((int32_t*)conv2d_NCHWc_global_let)[8] + (((int32_t)((int16_t*)data_pad_let)[cse_var_11]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[9] = (((int32_t*)conv2d_NCHWc_global_let)[9] + (((int32_t)((int16_t*)data_pad_let)[cse_var_12]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[10] = (((int32_t*)conv2d_NCHWc_global_let)[10] + (((int32_t)((int16_t*)data_pad_let)[cse_var_13]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[11] = (((int32_t*)conv2d_NCHWc_global_let)[11] + (((int32_t)((int16_t*)data_pad_let)[cse_var_14]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[12] = (((int32_t*)conv2d_NCHWc_global_let)[12] + (((int32_t)((int16_t*)data_pad_let)[cse_var_15]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[13] = (((int32_t*)conv2d_NCHWc_global_let)[13] + (((int32_t)((int16_t*)data_pad_let)[cse_var_16]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[14] = (((int32_t*)conv2d_NCHWc_global_let)[14] + (((int32_t)((int16_t*)data_pad_let)[cse_var_17]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[15] = (((int32_t*)conv2d_NCHWc_global_let)[15] + (((int32_t)((int16_t*)data_pad_let)[cse_var_18]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[16] = (((int32_t*)conv2d_NCHWc_global_let)[16] + (((int32_t)((int16_t*)data_pad_let)[cse_var_20]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[17] = (((int32_t*)conv2d_NCHWc_global_let)[17] + (((int32_t)((int16_t*)data_pad_let)[cse_var_21]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[18] = (((int32_t*)conv2d_NCHWc_global_let)[18] + (((int32_t)((int16_t*)data_pad_let)[cse_var_22]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[19] = (((int32_t*)conv2d_NCHWc_global_let)[19] + (((int32_t)((int16_t*)data_pad_let)[cse_var_23]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[20] = (((int32_t*)conv2d_NCHWc_global_let)[20] + (((int32_t)((int16_t*)data_pad_let)[cse_var_24]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[21] = (((int32_t*)conv2d_NCHWc_global_let)[21] + (((int32_t)((int16_t*)data_pad_let)[cse_var_25]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[22] = (((int32_t*)conv2d_NCHWc_global_let)[22] + (((int32_t)((int16_t*)data_pad_let)[cse_var_26]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[23] = (((int32_t*)conv2d_NCHWc_global_let)[23] + (((int32_t)((int16_t*)data_pad_let)[cse_var_27]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[24] = (((int32_t*)conv2d_NCHWc_global_let)[24] + (((int32_t)((int16_t*)data_pad_let)[cse_var_28]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[25] = (((int32_t*)conv2d_NCHWc_global_let)[25] + (((int32_t)((int16_t*)data_pad_let)[cse_var_29]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[26] = (((int32_t*)conv2d_NCHWc_global_let)[26] + (((int32_t)((int16_t*)data_pad_let)[cse_var_31]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[27] = (((int32_t*)conv2d_NCHWc_global_let)[27] + (((int32_t)((int16_t*)data_pad_let)[cse_var_32]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[28] = (((int32_t*)conv2d_NCHWc_global_let)[28] + (((int32_t)((int16_t*)data_pad_let)[cse_var_33]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[29] = (((int32_t*)conv2d_NCHWc_global_let)[29] + (((int32_t)((int16_t*)data_pad_let)[cse_var_34]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[30] = (((int32_t*)conv2d_NCHWc_global_let)[30] + (((int32_t)((int16_t*)data_pad_let)[cse_var_35]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[31] = (((int32_t*)conv2d_NCHWc_global_let)[31] + (((int32_t)((int16_t*)data_pad_let)[cse_var_36]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[32] = (((int32_t*)conv2d_NCHWc_global_let)[32] + (((int32_t)((int16_t*)data_pad_let)[cse_var_37]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[33] = (((int32_t*)conv2d_NCHWc_global_let)[33] + (((int32_t)((int16_t*)data_pad_let)[cse_var_38]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[34] = (((int32_t*)conv2d_NCHWc_global_let)[34] + (((int32_t)((int16_t*)data_pad_let)[cse_var_39]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[35] = (((int32_t*)conv2d_NCHWc_global_let)[35] + (((int32_t)((int16_t*)data_pad_let)[cse_var_40]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[36] = (((int32_t*)conv2d_NCHWc_global_let)[36] + (((int32_t)((int16_t*)data_pad_let)[cse_var_42]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[37] = (((int32_t*)conv2d_NCHWc_global_let)[37] + (((int32_t)((int16_t*)data_pad_let)[cse_var_43]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[38] = (((int32_t*)conv2d_NCHWc_global_let)[38] + (((int32_t)((int16_t*)data_pad_let)[cse_var_44]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[39] = (((int32_t*)conv2d_NCHWc_global_let)[39] + (((int32_t)((int16_t*)data_pad_let)[cse_var_45]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_4])));
      ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_48]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_49]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_50]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_51]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[cse_var_52]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[cse_var_10]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[cse_var_11]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[8] = (((int32_t*)conv2d_NCHWc_global_let)[8] + (((int32_t)((int16_t*)data_pad_let)[cse_var_12]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[9] = (((int32_t*)conv2d_NCHWc_global_let)[9] + (((int32_t)((int16_t*)data_pad_let)[cse_var_13]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[10] = (((int32_t*)conv2d_NCHWc_global_let)[10] + (((int32_t)((int16_t*)data_pad_let)[cse_var_14]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[11] = (((int32_t*)conv2d_NCHWc_global_let)[11] + (((int32_t)((int16_t*)data_pad_let)[cse_var_15]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[12] = (((int32_t*)conv2d_NCHWc_global_let)[12] + (((int32_t)((int16_t*)data_pad_let)[cse_var_16]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[13] = (((int32_t*)conv2d_NCHWc_global_let)[13] + (((int32_t)((int16_t*)data_pad_let)[cse_var_17]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[14] = (((int32_t*)conv2d_NCHWc_global_let)[14] + (((int32_t)((int16_t*)data_pad_let)[cse_var_18]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[15] = (((int32_t*)conv2d_NCHWc_global_let)[15] + (((int32_t)((int16_t*)data_pad_let)[cse_var_20]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[16] = (((int32_t*)conv2d_NCHWc_global_let)[16] + (((int32_t)((int16_t*)data_pad_let)[cse_var_21]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[17] = (((int32_t*)conv2d_NCHWc_global_let)[17] + (((int32_t)((int16_t*)data_pad_let)[cse_var_22]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[18] = (((int32_t*)conv2d_NCHWc_global_let)[18] + (((int32_t)((int16_t*)data_pad_let)[cse_var_23]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[19] = (((int32_t*)conv2d_NCHWc_global_let)[19] + (((int32_t)((int16_t*)data_pad_let)[cse_var_24]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[20] = (((int32_t*)conv2d_NCHWc_global_let)[20] + (((int32_t)((int16_t*)data_pad_let)[cse_var_25]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[21] = (((int32_t*)conv2d_NCHWc_global_let)[21] + (((int32_t)((int16_t*)data_pad_let)[cse_var_26]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[22] = (((int32_t*)conv2d_NCHWc_global_let)[22] + (((int32_t)((int16_t*)data_pad_let)[cse_var_27]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[23] = (((int32_t*)conv2d_NCHWc_global_let)[23] + (((int32_t)((int16_t*)data_pad_let)[cse_var_28]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[24] = (((int32_t*)conv2d_NCHWc_global_let)[24] + (((int32_t)((int16_t*)data_pad_let)[cse_var_29]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[25] = (((int32_t*)conv2d_NCHWc_global_let)[25] + (((int32_t)((int16_t*)data_pad_let)[cse_var_31]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[26] = (((int32_t*)conv2d_NCHWc_global_let)[26] + (((int32_t)((int16_t*)data_pad_let)[cse_var_32]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[27] = (((int32_t*)conv2d_NCHWc_global_let)[27] + (((int32_t)((int16_t*)data_pad_let)[cse_var_33]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[28] = (((int32_t*)conv2d_NCHWc_global_let)[28] + (((int32_t)((int16_t*)data_pad_let)[cse_var_34]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[29] = (((int32_t*)conv2d_NCHWc_global_let)[29] + (((int32_t)((int16_t*)data_pad_let)[cse_var_35]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[30] = (((int32_t*)conv2d_NCHWc_global_let)[30] + (((int32_t)((int16_t*)data_pad_let)[cse_var_36]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[31] = (((int32_t*)conv2d_NCHWc_global_let)[31] + (((int32_t)((int16_t*)data_pad_let)[cse_var_37]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[32] = (((int32_t*)conv2d_NCHWc_global_let)[32] + (((int32_t)((int16_t*)data_pad_let)[cse_var_38]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[33] = (((int32_t*)conv2d_NCHWc_global_let)[33] + (((int32_t)((int16_t*)data_pad_let)[cse_var_39]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[34] = (((int32_t*)conv2d_NCHWc_global_let)[34] + (((int32_t)((int16_t*)data_pad_let)[cse_var_40]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[35] = (((int32_t*)conv2d_NCHWc_global_let)[35] + (((int32_t)((int16_t*)data_pad_let)[cse_var_42]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[36] = (((int32_t*)conv2d_NCHWc_global_let)[36] + (((int32_t)((int16_t*)data_pad_let)[cse_var_43]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[37] = (((int32_t*)conv2d_NCHWc_global_let)[37] + (((int32_t)((int16_t*)data_pad_let)[cse_var_44]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[38] = (((int32_t*)conv2d_NCHWc_global_let)[38] + (((int32_t)((int16_t*)data_pad_let)[cse_var_45]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[39] = (((int32_t*)conv2d_NCHWc_global_let)[39] + (((int32_t)((int16_t*)data_pad_let)[cse_var_46]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_5])));
      ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_49]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_50]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_51]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_52]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[cse_var_10]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[cse_var_11]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[cse_var_12]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[8] = (((int32_t*)conv2d_NCHWc_global_let)[8] + (((int32_t)((int16_t*)data_pad_let)[cse_var_13]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[9] = (((int32_t*)conv2d_NCHWc_global_let)[9] + (((int32_t)((int16_t*)data_pad_let)[cse_var_14]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[10] = (((int32_t*)conv2d_NCHWc_global_let)[10] + (((int32_t)((int16_t*)data_pad_let)[cse_var_15]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[11] = (((int32_t*)conv2d_NCHWc_global_let)[11] + (((int32_t)((int16_t*)data_pad_let)[cse_var_16]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[12] = (((int32_t*)conv2d_NCHWc_global_let)[12] + (((int32_t)((int16_t*)data_pad_let)[cse_var_17]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[13] = (((int32_t*)conv2d_NCHWc_global_let)[13] + (((int32_t)((int16_t*)data_pad_let)[cse_var_18]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[14] = (((int32_t*)conv2d_NCHWc_global_let)[14] + (((int32_t)((int16_t*)data_pad_let)[cse_var_20]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[15] = (((int32_t*)conv2d_NCHWc_global_let)[15] + (((int32_t)((int16_t*)data_pad_let)[cse_var_21]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[16] = (((int32_t*)conv2d_NCHWc_global_let)[16] + (((int32_t)((int16_t*)data_pad_let)[cse_var_22]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[17] = (((int32_t*)conv2d_NCHWc_global_let)[17] + (((int32_t)((int16_t*)data_pad_let)[cse_var_23]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[18] = (((int32_t*)conv2d_NCHWc_global_let)[18] + (((int32_t)((int16_t*)data_pad_let)[cse_var_24]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[19] = (((int32_t*)conv2d_NCHWc_global_let)[19] + (((int32_t)((int16_t*)data_pad_let)[cse_var_25]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[20] = (((int32_t*)conv2d_NCHWc_global_let)[20] + (((int32_t)((int16_t*)data_pad_let)[cse_var_26]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[21] = (((int32_t*)conv2d_NCHWc_global_let)[21] + (((int32_t)((int16_t*)data_pad_let)[cse_var_27]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[22] = (((int32_t*)conv2d_NCHWc_global_let)[22] + (((int32_t)((int16_t*)data_pad_let)[cse_var_28]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[23] = (((int32_t*)conv2d_NCHWc_global_let)[23] + (((int32_t)((int16_t*)data_pad_let)[cse_var_29]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[24] = (((int32_t*)conv2d_NCHWc_global_let)[24] + (((int32_t)((int16_t*)data_pad_let)[cse_var_31]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[25] = (((int32_t*)conv2d_NCHWc_global_let)[25] + (((int32_t)((int16_t*)data_pad_let)[cse_var_32]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[26] = (((int32_t*)conv2d_NCHWc_global_let)[26] + (((int32_t)((int16_t*)data_pad_let)[cse_var_33]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[27] = (((int32_t*)conv2d_NCHWc_global_let)[27] + (((int32_t)((int16_t*)data_pad_let)[cse_var_34]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[28] = (((int32_t*)conv2d_NCHWc_global_let)[28] + (((int32_t)((int16_t*)data_pad_let)[cse_var_35]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[29] = (((int32_t*)conv2d_NCHWc_global_let)[29] + (((int32_t)((int16_t*)data_pad_let)[cse_var_36]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[30] = (((int32_t*)conv2d_NCHWc_global_let)[30] + (((int32_t)((int16_t*)data_pad_let)[cse_var_37]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[31] = (((int32_t*)conv2d_NCHWc_global_let)[31] + (((int32_t)((int16_t*)data_pad_let)[cse_var_38]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[32] = (((int32_t*)conv2d_NCHWc_global_let)[32] + (((int32_t)((int16_t*)data_pad_let)[cse_var_39]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[33] = (((int32_t*)conv2d_NCHWc_global_let)[33] + (((int32_t)((int16_t*)data_pad_let)[cse_var_40]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[34] = (((int32_t*)conv2d_NCHWc_global_let)[34] + (((int32_t)((int16_t*)data_pad_let)[cse_var_42]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[35] = (((int32_t*)conv2d_NCHWc_global_let)[35] + (((int32_t)((int16_t*)data_pad_let)[cse_var_43]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[36] = (((int32_t*)conv2d_NCHWc_global_let)[36] + (((int32_t)((int16_t*)data_pad_let)[cse_var_44]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[37] = (((int32_t*)conv2d_NCHWc_global_let)[37] + (((int32_t)((int16_t*)data_pad_let)[cse_var_45]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[38] = (((int32_t*)conv2d_NCHWc_global_let)[38] + (((int32_t)((int16_t*)data_pad_let)[cse_var_46]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[39] = (((int32_t*)conv2d_NCHWc_global_let)[39] + (((int32_t)((int16_t*)data_pad_let)[cse_var_47]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_6])));
      ((int32_t*)conv2d_NCHWc_global_let)[0] = (((int32_t*)conv2d_NCHWc_global_let)[0] + (((int32_t)((int16_t*)data_pad_let)[cse_var_50]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[1] = (((int32_t*)conv2d_NCHWc_global_let)[1] + (((int32_t)((int16_t*)data_pad_let)[cse_var_51]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[2] = (((int32_t*)conv2d_NCHWc_global_let)[2] + (((int32_t)((int16_t*)data_pad_let)[cse_var_52]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[3] = (((int32_t*)conv2d_NCHWc_global_let)[3] + (((int32_t)((int16_t*)data_pad_let)[cse_var_9]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[4] = (((int32_t*)conv2d_NCHWc_global_let)[4] + (((int32_t)((int16_t*)data_pad_let)[cse_var_10]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[5] = (((int32_t*)conv2d_NCHWc_global_let)[5] + (((int32_t)((int16_t*)data_pad_let)[cse_var_11]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[6] = (((int32_t*)conv2d_NCHWc_global_let)[6] + (((int32_t)((int16_t*)data_pad_let)[cse_var_12]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[7] = (((int32_t*)conv2d_NCHWc_global_let)[7] + (((int32_t)((int16_t*)data_pad_let)[cse_var_13]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[8] = (((int32_t*)conv2d_NCHWc_global_let)[8] + (((int32_t)((int16_t*)data_pad_let)[cse_var_14]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[9] = (((int32_t*)conv2d_NCHWc_global_let)[9] + (((int32_t)((int16_t*)data_pad_let)[cse_var_15]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[10] = (((int32_t*)conv2d_NCHWc_global_let)[10] + (((int32_t)((int16_t*)data_pad_let)[cse_var_16]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[11] = (((int32_t*)conv2d_NCHWc_global_let)[11] + (((int32_t)((int16_t*)data_pad_let)[cse_var_17]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[12] = (((int32_t*)conv2d_NCHWc_global_let)[12] + (((int32_t)((int16_t*)data_pad_let)[cse_var_18]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[13] = (((int32_t*)conv2d_NCHWc_global_let)[13] + (((int32_t)((int16_t*)data_pad_let)[cse_var_20]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[14] = (((int32_t*)conv2d_NCHWc_global_let)[14] + (((int32_t)((int16_t*)data_pad_let)[cse_var_21]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[15] = (((int32_t*)conv2d_NCHWc_global_let)[15] + (((int32_t)((int16_t*)data_pad_let)[cse_var_22]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[16] = (((int32_t*)conv2d_NCHWc_global_let)[16] + (((int32_t)((int16_t*)data_pad_let)[cse_var_23]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[17] = (((int32_t*)conv2d_NCHWc_global_let)[17] + (((int32_t)((int16_t*)data_pad_let)[cse_var_24]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[18] = (((int32_t*)conv2d_NCHWc_global_let)[18] + (((int32_t)((int16_t*)data_pad_let)[cse_var_25]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[19] = (((int32_t*)conv2d_NCHWc_global_let)[19] + (((int32_t)((int16_t*)data_pad_let)[cse_var_26]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[20] = (((int32_t*)conv2d_NCHWc_global_let)[20] + (((int32_t)((int16_t*)data_pad_let)[cse_var_27]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[21] = (((int32_t*)conv2d_NCHWc_global_let)[21] + (((int32_t)((int16_t*)data_pad_let)[cse_var_28]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[22] = (((int32_t*)conv2d_NCHWc_global_let)[22] + (((int32_t)((int16_t*)data_pad_let)[cse_var_29]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[23] = (((int32_t*)conv2d_NCHWc_global_let)[23] + (((int32_t)((int16_t*)data_pad_let)[cse_var_31]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[24] = (((int32_t*)conv2d_NCHWc_global_let)[24] + (((int32_t)((int16_t*)data_pad_let)[cse_var_32]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[25] = (((int32_t*)conv2d_NCHWc_global_let)[25] + (((int32_t)((int16_t*)data_pad_let)[cse_var_33]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[26] = (((int32_t*)conv2d_NCHWc_global_let)[26] + (((int32_t)((int16_t*)data_pad_let)[cse_var_34]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[27] = (((int32_t*)conv2d_NCHWc_global_let)[27] + (((int32_t)((int16_t*)data_pad_let)[cse_var_35]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[28] = (((int32_t*)conv2d_NCHWc_global_let)[28] + (((int32_t)((int16_t*)data_pad_let)[cse_var_36]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[29] = (((int32_t*)conv2d_NCHWc_global_let)[29] + (((int32_t)((int16_t*)data_pad_let)[cse_var_37]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[30] = (((int32_t*)conv2d_NCHWc_global_let)[30] + (((int32_t)((int16_t*)data_pad_let)[cse_var_38]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[31] = (((int32_t*)conv2d_NCHWc_global_let)[31] + (((int32_t)((int16_t*)data_pad_let)[cse_var_39]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[32] = (((int32_t*)conv2d_NCHWc_global_let)[32] + (((int32_t)((int16_t*)data_pad_let)[cse_var_40]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[33] = (((int32_t*)conv2d_NCHWc_global_let)[33] + (((int32_t)((int16_t*)data_pad_let)[cse_var_42]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[34] = (((int32_t*)conv2d_NCHWc_global_let)[34] + (((int32_t)((int16_t*)data_pad_let)[cse_var_43]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[35] = (((int32_t*)conv2d_NCHWc_global_let)[35] + (((int32_t)((int16_t*)data_pad_let)[cse_var_44]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[36] = (((int32_t*)conv2d_NCHWc_global_let)[36] + (((int32_t)((int16_t*)data_pad_let)[cse_var_45]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[37] = (((int32_t*)conv2d_NCHWc_global_let)[37] + (((int32_t)((int16_t*)data_pad_let)[cse_var_46]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[38] = (((int32_t*)conv2d_NCHWc_global_let)[38] + (((int32_t)((int16_t*)data_pad_let)[cse_var_47]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
      ((int32_t*)conv2d_NCHWc_global_let)[39] = (((int32_t*)conv2d_NCHWc_global_let)[39] + (((int32_t)((int16_t*)data_pad_let)[(cse_var_54 + 46)]) * ((int32_t)((int16_t*)fused_constant_let)[cse_var_7])));
    }
    for (int32_t ax3_inner = 0; ax3_inner < 40; ++ax3_inner) {
      int32_t cse_var_55 = (ax0_ax1_fused_ax2_fused / 49);
      int32_t __1 = ((int32_t)(((((int64_t)(((int32_t*)conv2d_NCHWc_global_let)[ax3_inner] + ((int32_t*)fused_nn_contrib_conv2d_NCHWc_constant_let)[cse_var_55])) * ((int64_t)((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_let)[cse_var_55])) + ((int64_t)1 << ((int64_t)((((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_2_let)[cse_var_55] + 31) - 1)))) >> ((int64_t)(((int32_t*)fused_nn_contrib_conv2d_NCHWc_add_constant_2_let)[cse_var_55] + 31)))) - 128;
      int32_t __2 = (__1) < (127) ? (__1) : (127);
      T_cast[((ax0_ax1_fused_ax2_fused * 40) + ax3_inner)] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_dense_add_fixed_point_multiply_add_clip_cast(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_22_var, uint8_t* global_workspace_23_var) {
  void* fused_nn_dense_constant_let = (&(global_const_workspace_22_var[54080]));
  void* fused_constant_3_let = (&(global_const_workspace_22_var[0]));
  void* compute_let = (&(global_workspace_23_var[960]));
  void* compute_let_1 = (&(global_workspace_23_var[0]));
  ((int32_t*)compute_let)[0] = 0;
  ((int32_t*)compute_let)[1] = 0;
  ((int32_t*)compute_let)[2] = 0;
  ((int32_t*)compute_let)[3] = 0;
  ((int32_t*)compute_let)[4] = 0;
  ((int32_t*)compute_let)[5] = 0;
  ((int32_t*)compute_let)[6] = 0;
  ((int32_t*)compute_let)[7] = 0;
  ((int32_t*)compute_let)[8] = 0;
  ((int32_t*)compute_let)[9] = 0;
  ((int32_t*)compute_let)[10] = 0;
  ((int32_t*)compute_let)[11] = 0;
  ((int32_t*)compute_let)[12] = 0;
  ((int32_t*)compute_let)[13] = 0;
  ((int32_t*)compute_let)[14] = 0;
  ((int32_t*)compute_let)[15] = 0;
  ((int32_t*)compute_let)[16] = 0;
  ((int32_t*)compute_let)[17] = 0;
  ((int32_t*)compute_let)[18] = 0;
  ((int32_t*)compute_let)[19] = 0;
  ((int32_t*)compute_let)[20] = 0;
  ((int32_t*)compute_let)[21] = 0;
  ((int32_t*)compute_let)[22] = 0;
  ((int32_t*)compute_let)[23] = 0;
  ((int32_t*)compute_let)[24] = 0;
  ((int32_t*)compute_let)[25] = 0;
  ((int32_t*)compute_let)[26] = 0;
  ((int32_t*)compute_let)[27] = 0;
  ((int32_t*)compute_let)[28] = 0;
  ((int32_t*)compute_let)[29] = 0;
  ((int32_t*)compute_let)[30] = 0;
  ((int32_t*)compute_let)[31] = 0;
  for (int32_t k = 0; k < 480; ++k) {
    ((int32_t*)compute_let)[0] = (((int32_t*)compute_let)[0] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[k])));
    ((int32_t*)compute_let)[1] = (((int32_t*)compute_let)[1] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 480)])));
    ((int32_t*)compute_let)[2] = (((int32_t*)compute_let)[2] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 960)])));
    ((int32_t*)compute_let)[3] = (((int32_t*)compute_let)[3] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 1440)])));
    ((int32_t*)compute_let)[4] = (((int32_t*)compute_let)[4] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 1920)])));
    ((int32_t*)compute_let)[5] = (((int32_t*)compute_let)[5] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 2400)])));
    ((int32_t*)compute_let)[6] = (((int32_t*)compute_let)[6] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 2880)])));
    ((int32_t*)compute_let)[7] = (((int32_t*)compute_let)[7] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 3360)])));
    ((int32_t*)compute_let)[8] = (((int32_t*)compute_let)[8] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 3840)])));
    ((int32_t*)compute_let)[9] = (((int32_t*)compute_let)[9] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 4320)])));
    ((int32_t*)compute_let)[10] = (((int32_t*)compute_let)[10] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 4800)])));
    ((int32_t*)compute_let)[11] = (((int32_t*)compute_let)[11] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 5280)])));
    ((int32_t*)compute_let)[12] = (((int32_t*)compute_let)[12] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 5760)])));
    ((int32_t*)compute_let)[13] = (((int32_t*)compute_let)[13] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 6240)])));
    ((int32_t*)compute_let)[14] = (((int32_t*)compute_let)[14] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 6720)])));
    ((int32_t*)compute_let)[15] = (((int32_t*)compute_let)[15] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 7200)])));
    ((int32_t*)compute_let)[16] = (((int32_t*)compute_let)[16] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 7680)])));
    ((int32_t*)compute_let)[17] = (((int32_t*)compute_let)[17] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 8160)])));
    ((int32_t*)compute_let)[18] = (((int32_t*)compute_let)[18] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 8640)])));
    ((int32_t*)compute_let)[19] = (((int32_t*)compute_let)[19] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 9120)])));
    ((int32_t*)compute_let)[20] = (((int32_t*)compute_let)[20] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 9600)])));
    ((int32_t*)compute_let)[21] = (((int32_t*)compute_let)[21] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 10080)])));
    ((int32_t*)compute_let)[22] = (((int32_t*)compute_let)[22] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 10560)])));
    ((int32_t*)compute_let)[23] = (((int32_t*)compute_let)[23] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 11040)])));
    ((int32_t*)compute_let)[24] = (((int32_t*)compute_let)[24] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 11520)])));
    ((int32_t*)compute_let)[25] = (((int32_t*)compute_let)[25] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 12000)])));
    ((int32_t*)compute_let)[26] = (((int32_t*)compute_let)[26] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 12480)])));
    ((int32_t*)compute_let)[27] = (((int32_t*)compute_let)[27] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 12960)])));
    ((int32_t*)compute_let)[28] = (((int32_t*)compute_let)[28] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 13440)])));
    ((int32_t*)compute_let)[29] = (((int32_t*)compute_let)[29] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 13920)])));
    ((int32_t*)compute_let)[30] = (((int32_t*)compute_let)[30] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 14400)])));
    ((int32_t*)compute_let)[31] = (((int32_t*)compute_let)[31] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_3_let)[(k + 14880)])));
  }
  for (int32_t x_inner = 0; x_inner < 32; ++x_inner) {
    ((int32_t*)compute_let_1)[x_inner] = 0;
    ((int32_t*)compute_let_1)[x_inner] = (((int32_t*)compute_let_1)[x_inner] + ((int32_t*)compute_let)[x_inner]);
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let_1)[ax1] + ((int32_t*)fused_nn_dense_constant_let)[ax1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let_1)[ax1] + ((int32_t*)fused_nn_dense_constant_let)[ax1]))) * (int64_t)1483316438) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t __2 = (__1) < (127) ? (__1) : (127);
    T_cast[ax1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_dense_add_fixed_point_multiply_add_clip_cast_1(int16_t* p0, int8_t* T_cast, uint8_t* global_const_workspace_26_var, uint8_t* global_workspace_27_var) {
  void* fused_nn_dense_constant_1_let = (&(global_const_workspace_26_var[54208]));
  void* fused_constant_4_let = (&(global_const_workspace_26_var[52736]));
  void* compute_let = (&(global_workspace_27_var[64]));
  void* compute_let_1 = (&(global_workspace_27_var[0]));
  ((int32_t*)compute_let)[0] = 0;
  ((int32_t*)compute_let)[1] = 0;
  ((int32_t*)compute_let)[2] = 0;
  ((int32_t*)compute_let)[3] = 0;
  ((int32_t*)compute_let)[4] = 0;
  ((int32_t*)compute_let)[5] = 0;
  ((int32_t*)compute_let)[6] = 0;
  ((int32_t*)compute_let)[7] = 0;
  ((int32_t*)compute_let)[8] = 0;
  ((int32_t*)compute_let)[9] = 0;
  ((int32_t*)compute_let)[10] = 0;
  ((int32_t*)compute_let)[11] = 0;
  ((int32_t*)compute_let)[12] = 0;
  ((int32_t*)compute_let)[13] = 0;
  ((int32_t*)compute_let)[14] = 0;
  ((int32_t*)compute_let)[15] = 0;
  for (int32_t k = 0; k < 32; ++k) {
    ((int32_t*)compute_let)[0] = (((int32_t*)compute_let)[0] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[k])));
    ((int32_t*)compute_let)[1] = (((int32_t*)compute_let)[1] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 32)])));
    ((int32_t*)compute_let)[2] = (((int32_t*)compute_let)[2] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 64)])));
    ((int32_t*)compute_let)[3] = (((int32_t*)compute_let)[3] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 96)])));
    ((int32_t*)compute_let)[4] = (((int32_t*)compute_let)[4] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 128)])));
    ((int32_t*)compute_let)[5] = (((int32_t*)compute_let)[5] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 160)])));
    ((int32_t*)compute_let)[6] = (((int32_t*)compute_let)[6] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 192)])));
    ((int32_t*)compute_let)[7] = (((int32_t*)compute_let)[7] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 224)])));
    ((int32_t*)compute_let)[8] = (((int32_t*)compute_let)[8] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 256)])));
    ((int32_t*)compute_let)[9] = (((int32_t*)compute_let)[9] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 288)])));
    ((int32_t*)compute_let)[10] = (((int32_t*)compute_let)[10] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 320)])));
    ((int32_t*)compute_let)[11] = (((int32_t*)compute_let)[11] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 352)])));
    ((int32_t*)compute_let)[12] = (((int32_t*)compute_let)[12] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 384)])));
    ((int32_t*)compute_let)[13] = (((int32_t*)compute_let)[13] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 416)])));
    ((int32_t*)compute_let)[14] = (((int32_t*)compute_let)[14] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 448)])));
    ((int32_t*)compute_let)[15] = (((int32_t*)compute_let)[15] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_4_let)[(k + 480)])));
  }
  for (int32_t x_inner = 0; x_inner < 16; ++x_inner) {
    ((int32_t*)compute_let_1)[x_inner] = 0;
    ((int32_t*)compute_let_1)[x_inner] = (((int32_t*)compute_let_1)[x_inner] + ((int32_t*)compute_let)[x_inner]);
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let_1)[ax1] + ((int32_t*)fused_nn_dense_constant_1_let)[ax1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let_1)[ax1] + ((int32_t*)fused_nn_dense_constant_1_let)[ax1]))) * (int64_t)1321827316) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) - 128;
    int32_t __2 = (__1) < (127) ? (__1) : (127);
    T_cast[ax1] = ((int8_t)((__2) > (-128) ? (__2) : (-128)));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_dense_add_fixed_point_multiply_add_clip_subtract_cast_multiply(int16_t* p0, float* T_multiply, uint8_t* global_const_workspace_30_var, uint8_t* global_workspace_31_var) {
  void* fused_nn_dense_constant_2_let = (&(global_const_workspace_30_var[54976]));
  void* fused_constant_5_let = (&(global_const_workspace_30_var[53760]));
  void* compute_let = (&(global_workspace_31_var[0]));
  void* compute_let_1 = (&(global_workspace_31_var[48]));
  ((int32_t*)compute_let)[0] = 0;
  ((int32_t*)compute_let)[1] = 0;
  ((int32_t*)compute_let)[2] = 0;
  ((int32_t*)compute_let)[3] = 0;
  ((int32_t*)compute_let)[4] = 0;
  ((int32_t*)compute_let)[5] = 0;
  ((int32_t*)compute_let)[6] = 0;
  ((int32_t*)compute_let)[7] = 0;
  ((int32_t*)compute_let)[8] = 0;
  ((int32_t*)compute_let)[9] = 0;
  for (int32_t k = 0; k < 16; ++k) {
    ((int32_t*)compute_let)[0] = (((int32_t*)compute_let)[0] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[k])));
    ((int32_t*)compute_let)[1] = (((int32_t*)compute_let)[1] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 16)])));
    ((int32_t*)compute_let)[2] = (((int32_t*)compute_let)[2] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 32)])));
    ((int32_t*)compute_let)[3] = (((int32_t*)compute_let)[3] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 48)])));
    ((int32_t*)compute_let)[4] = (((int32_t*)compute_let)[4] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 64)])));
    ((int32_t*)compute_let)[5] = (((int32_t*)compute_let)[5] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 80)])));
    ((int32_t*)compute_let)[6] = (((int32_t*)compute_let)[6] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 96)])));
    ((int32_t*)compute_let)[7] = (((int32_t*)compute_let)[7] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 112)])));
    ((int32_t*)compute_let)[8] = (((int32_t*)compute_let)[8] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 128)])));
    ((int32_t*)compute_let)[9] = (((int32_t*)compute_let)[9] + (((int32_t)p0[k]) * ((int32_t)((int16_t*)fused_constant_5_let)[(k + 144)])));
  }
  for (int32_t x_inner = 0; x_inner < 10; ++x_inner) {
    ((int32_t*)compute_let_1)[x_inner] = 0;
    ((int32_t*)compute_let_1)[x_inner] = (((int32_t*)compute_let_1)[x_inner] + ((int32_t*)compute_let)[x_inner]);
  }
  for (int32_t ax1 = 0; ax1 < 10; ++ax1) {
    int32_t __1 = ((int32_t)(((((0 != 0) ? (((int64_t)(((int32_t*)compute_let_1)[ax1] + ((int32_t*)fused_nn_dense_constant_2_let)[ax1])) << ((int64_t)0)) : ((int64_t)(((int32_t*)compute_let_1)[ax1] + ((int32_t*)fused_nn_dense_constant_2_let)[ax1]))) * (int64_t)1349453042) + ((int64_t)1 << ((int64_t)((7 + 31) - 1)))) >> ((int64_t)(7 + 31)))) + 34;
    int32_t __2 = (__1) < (127) ? (__1) : (127);
    T_multiply[ax1] = (((float)(((__2) > (-128) ? (__2) : (-128)) - 34)) * 2.875707e-01f);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_max_pool2d_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_6_var, uint8_t* global_workspace_7_var) {
  void* pool_max_let = (&(global_workspace_7_var[31360]));
  for (int32_t ax0_ax1_fused_ax2_fused = 0; ax0_ax1_fused_ax2_fused < 384; ++ax0_ax1_fused_ax2_fused) {
    for (int32_t ax3 = 0; ax3 < 20; ++ax3) {
      ((int8_t*)pool_max_let)[((ax0_ax1_fused_ax2_fused * 20) + ax3)] = (int8_t)-128;
      for (int32_t rv0_rv1_fused = 0; rv0_rv1_fused < 4; ++rv0_rv1_fused) {
        int32_t cse_var_1 = ((ax0_ax1_fused_ax2_fused * 20) + ax3);
        int8_t __1 = ((int8_t*)pool_max_let)[cse_var_1];
        int8_t __2 = p0[((((((ax0_ax1_fused_ax2_fused / 24) * 1960) + ((ax0_ax1_fused_ax2_fused % 24) * 80)) + ((rv0_rv1_fused >> 1) * 40)) + (ax3 * 2)) + (rv0_rv1_fused & 1))];
        ((int8_t*)pool_max_let)[cse_var_1] = ((__1) > (__2) ? (__1) : (__2));
      }
    }
  }
  for (int32_t ax0_ax1_fused = 0; ax0_ax1_fused < 16; ++ax0_ax1_fused) {
    for (int32_t ax2 = 0; ax2 < 24; ++ax2) {
      for (int32_t ax3_1 = 0; ax3_1 < 20; ++ax3_1) {
        int32_t cse_var_2 = (((ax0_ax1_fused * 480) + (ax2 * 20)) + ax3_1);
        T_subtract[cse_var_2] = (((int16_t)((int8_t*)pool_max_let)[cse_var_2]) - (int16_t)-128);
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(float* p0, int8_t* T_cast, uint8_t* global_const_workspace_32_var, uint8_t* global_workspace_33_var) {
  void* T_softmax_maxelem_let = (&(global_workspace_33_var[96]));
  void* T_softmax_exp_let = (&(global_workspace_33_var[48]));
  void* T_softmax_expsum_let = (&(global_workspace_33_var[0]));
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
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_24_var, uint8_t* global_workspace_25_var) {
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
TVM_DLL int32_t tvmgen_default_fused_reshape_cast_subtract_1(int8_t* p0, int16_t* T_subtract, uint8_t* global_const_workspace_28_var, uint8_t* global_workspace_29_var) {
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
  void* sid_13_let = (&(global_workspace_1_var[80]));
  void* sid_11_let = (&(global_workspace_1_var[128]));
  void* sid_10_let = (&(global_workspace_1_var[0]));
  void* sid_12_let = (&(global_workspace_1_var[0]));
  void* sid_7_let = (&(global_workspace_1_var[0]));
  void* sid_1_let = (&(global_workspace_1_var[0]));
  void* sid_9_let = (&(global_workspace_1_var[960]));
  void* sid_3_let = (&(global_workspace_1_var[0]));
  void* sid_8_let = (&(global_workspace_1_var[0]));
  void* sid_14_let = (&(global_workspace_1_var[48]));
  void* sid_4_let = (&(global_workspace_1_var[23200]));
  void* sid_5_let = (&(global_workspace_1_var[23200]));
  void* sid_2_let = (&(global_workspace_1_var[0]));
  void* sid_6_let = (&(global_workspace_1_var[5760]));
  void* sid_15_let = (&(global_workspace_1_var[0]));
  if (tvmgen_default_fused_reshape_layout_transform_cast_subtract_layout_transform(serving_default_input_0_buffer_var, sid_1_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip_cast(sid_1_let, sid_2_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_max_pool2d_cast_subtract(sid_2_let, sid_3_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform(sid_3_let, sid_4_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip(sid_4_let, sid_5_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_cast_cast_subtract(sid_5_let, sid_6_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_1(sid_6_let, sid_7_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_contrib_conv2d_NCHWc_add_fixed_point_multiply_per_axis_add_clip_1(sid_7_let, sid_8_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_avg_pool2d_cast(sid_8_let, sid_9_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_layout_transform_layout_transform_reshape_cast_subtract(sid_9_let, sid_10_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_dense_add_fixed_point_multiply_add_clip_cast(sid_10_let, sid_11_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract(sid_11_let, sid_12_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_dense_add_fixed_point_multiply_add_clip_cast_1(sid_12_let, sid_13_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_reshape_cast_subtract_1(sid_13_let, sid_14_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_dense_add_fixed_point_multiply_add_clip_subtract_cast_multiply(sid_14_let, sid_15_let, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  if (tvmgen_default_fused_nn_softmax_divide_round_add_clip_cast(sid_15_let, StatefulPartitionedCall_0_buffer_var, global_const_workspace_0_var, global_workspace_1_var) != 0 ) return -1;
  return 0;
}

