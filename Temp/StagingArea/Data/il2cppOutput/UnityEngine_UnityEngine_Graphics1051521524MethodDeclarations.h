#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Mesh
struct Mesh_t940710334;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t1076357184;
// UnityEngine.Texture
struct Texture_t465682066;
// UnityEngine.RenderTexture
struct RenderTexture_t1605280484;
// UnityEngine.Material
struct Material_t2197338622;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1383993251;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh940710334.h"
#include "UnityEngine_UnityEngine_Matrix4x41261955742.h"
#include "UnityEngine_UnityEngine_MeshTopology2913335685.h"
#include "UnityEngine_UnityEngine_ComputeBuffer1076357184.h"
#include "UnityEngine_UnityEngine_Texture465682066.h"
#include "UnityEngine_UnityEngine_RenderTexture1605280484.h"
#include "UnityEngine_UnityEngine_Material2197338622.h"
#include "UnityEngine_UnityEngine_RenderBuffer2768847563.h"
#include "UnityEngine_UnityEngine_CubemapFace3028188205.h"

// System.Void UnityEngine.Graphics::DrawMeshNow(UnityEngine.Mesh,UnityEngine.Matrix4x4)
extern "C"  void Graphics_DrawMeshNow_m150453421 (Il2CppObject * __this /* static, unused */, Mesh_t940710334 * ___mesh0, Matrix4x4_t1261955742  ___matrix1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4,System.Int32)
extern "C"  void Graphics_Internal_DrawMeshNow2_m2841272972 (Il2CppObject * __this /* static, unused */, Mesh_t940710334 * ___mesh0, Matrix4x4_t1261955742  ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,UnityEngine.Matrix4x4&,System.Int32)
extern "C"  void Graphics_INTERNAL_CALL_Internal_DrawMeshNow2_m434064341 (Il2CppObject * __this /* static, unused */, Mesh_t940710334 * ___mesh0, Matrix4x4_t1261955742 * ___matrix1, int32_t ___materialIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::DrawProceduralIndirect(UnityEngine.MeshTopology,UnityEngine.ComputeBuffer,System.Int32)
extern "C"  void Graphics_DrawProceduralIndirect_m1742458937 (Il2CppObject * __this /* static, unused */, int32_t ___topology0, ComputeBuffer_t1076357184 * ___bufferWithArgs1, int32_t ___argsOffset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m2123328641 (Il2CppObject * __this /* static, unused */, Texture_t465682066 * ___source0, RenderTexture_t1605280484 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void Graphics_Blit_m4129959705 (Il2CppObject * __this /* static, unused */, Texture_t465682066 * ___source0, RenderTexture_t1605280484 * ___dest1, Material_t2197338622 * ___mat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m2987760672 (Il2CppObject * __this /* static, unused */, Texture_t465682066 * ___source0, RenderTexture_t1605280484 * ___dest1, Material_t2197338622 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C"  void Graphics_Internal_BlitMaterial_m2512431126 (Il2CppObject * __this /* static, unused */, Texture_t465682066 * ___source0, RenderTexture_t1605280484 * ___dest1, Material_t2197338622 * ___mat2, int32_t ___pass3, bool ___setRT4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_BlitMultiTap_m1361831915 (Il2CppObject * __this /* static, unused */, Texture_t465682066 * ___source0, RenderTexture_t1605280484 * ___dest1, Material_t2197338622 * ___mat2, Vector2U5BU5D_t1383993251* ___offsets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMultiTap(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Vector2[])
extern "C"  void Graphics_Internal_BlitMultiTap_m671685431 (Il2CppObject * __this /* static, unused */, Texture_t465682066 * ___source0, RenderTexture_t1605280484 * ___dest1, Material_t2197338622 * ___mat2, Vector2U5BU5D_t1383993251* ___offsets3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetNullRT()
extern "C"  void Graphics_Internal_SetNullRT_m3380023195 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRTSimple(UnityEngine.RenderBuffer&,UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_Internal_SetRTSimple_m655076496 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2768847563 * ___color0, RenderBuffer_t2768847563 * ___depth1, int32_t ___mip2, int32_t ___face3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRandomWriteTarget(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_SetRandomWriteTarget_m3626433912 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t1076357184 * ___uav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::ClearRandomWriteTargets()
extern "C"  void Graphics_ClearRandomWriteTargets_m1829463965 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_SetRandomWriteTargetBuffer(System.Int32,UnityEngine.ComputeBuffer)
extern "C"  void Graphics_Internal_SetRandomWriteTargetBuffer_m3336204610 (Il2CppObject * __this /* static, unused */, int32_t ___index0, ComputeBuffer_t1076357184 * ___uav1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderBuffer,UnityEngine.RenderBuffer,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m479328343 (Il2CppObject * __this /* static, unused */, RenderBuffer_t2768847563  ___colorBuffer0, RenderBuffer_t2768847563  ___depthBuffer1, int32_t ___mipLevel2, int32_t ___face3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTargetImpl(UnityEngine.RenderTexture,System.Int32,UnityEngine.CubemapFace)
extern "C"  void Graphics_SetRenderTargetImpl_m831104501 (Il2CppObject * __this /* static, unused */, RenderTexture_t1605280484 * ___rt0, int32_t ___mipLevel1, int32_t ___face2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::SetRenderTarget(UnityEngine.RenderTexture)
extern "C"  void Graphics_SetRenderTarget_m3661877391 (Il2CppObject * __this /* static, unused */, RenderTexture_t1605280484 * ___rt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
