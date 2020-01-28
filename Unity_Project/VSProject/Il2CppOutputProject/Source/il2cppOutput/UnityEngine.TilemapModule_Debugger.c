#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[2] = 
{
	{ 205, 0,  7 } /*tableIndex: 0 */,
	{ 206, 1,  9 } /*tableIndex: 1 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"tileData",
	"tileAnimationData",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[32] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.Tilemaps.ITilemap::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0 } /* 0x06000003 UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance() */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.Tilemaps.Tile::.ctor() */,
	{ 0, 0 } /* 0x06000005 UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite() */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0 } /* 0x06000007 UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color() */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color) */,
	{ 0, 0 } /* 0x06000009 UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform() */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0 } /* 0x0600000B UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject() */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x0600000D UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags() */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0 } /* 0x0600000F UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType() */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 0 } /* 0x06000012 System.Void UnityEngine.Tilemaps.TileBase::.ctor() */,
	{ 0, 0 } /* 0x06000013 System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000014 System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 1 } /* 0x06000015 UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000016 System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */,
	{ 1, 1 } /* 0x06000017 UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0 } /* 0x06000018 System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x06000019 System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0 } /* 0x0600001A System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&) */,
	{ 0, 0 } /* 0x0600001B System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0 } /* 0x0600001C System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color) */,
	{ 0, 0 } /* 0x0600001D System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0 } /* 0x0600001E System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x0600001F System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0 } /* 0x06000020 System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[180] = 
{
	{ 13761, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0, 0 } /* seqPointIndex: 0 */,
	{ 13761, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1, 0 } /* seqPointIndex: 1 */,
	{ 13761, -1, 1, 11, 11, 18, -1, 0, kSequencePointKind_Normal, 0, 2, 0 } /* seqPointIndex: 2 */,
	{ 13761, -1, 1, 12, 12, 9, -1, 6, kSequencePointKind_Normal, 0, 3, 0 } /* seqPointIndex: 3 */,
	{ 13761, -1, 1, 13, 13, 9, -1, 7, kSequencePointKind_Normal, 0, 4, 0 } /* seqPointIndex: 4 */,
	{ 13761, -1, 1, 11, 11, 18, -1, 1, kSequencePointKind_StepOut, 0, 5, 0 } /* seqPointIndex: 5 */,
	{ 13762, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6, 0 } /* seqPointIndex: 6 */,
	{ 13762, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7, 0 } /* seqPointIndex: 7 */,
	{ 13762, -1, 1, 59, 59, 9, -1, 0, kSequencePointKind_Normal, 0, 8, 0 } /* seqPointIndex: 8 */,
	{ 13762, -1, 1, 60, 60, 13, -1, 1, kSequencePointKind_Normal, 0, 9, 0 } /* seqPointIndex: 9 */,
	{ 13762, -1, 1, 60, 60, 23, -1, 8, kSequencePointKind_Normal, 0, 10, 0 } /* seqPointIndex: 10 */,
	{ 13762, -1, 1, 61, 61, 9, -1, 13, kSequencePointKind_Normal, 0, 11, 0 } /* seqPointIndex: 11 */,
	{ 13762, -1, 1, 60, 60, 23, -1, 8, kSequencePointKind_StepOut, 0, 12, 0 } /* seqPointIndex: 12 */,
	{ 13763, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 13, 0 } /* seqPointIndex: 13 */,
	{ 13763, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 14, 0 } /* seqPointIndex: 14 */,
	{ 13763, -1, 1, 70, 70, 9, -1, 0, kSequencePointKind_Normal, 0, 15, 0 } /* seqPointIndex: 15 */,
	{ 13763, -1, 1, 71, 71, 26, -1, 1, kSequencePointKind_Normal, 0, 16, 0 } /* seqPointIndex: 16 */,
	{ 13763, -1, 1, 72, 72, 13, -1, 11, kSequencePointKind_Normal, 0, 17, 0 } /* seqPointIndex: 17 */,
	{ 13763, -1, 1, 73, 73, 9, -1, 22, kSequencePointKind_Normal, 0, 18, 0 } /* seqPointIndex: 18 */,
	{ 13763, -1, 1, 71, 71, 26, -1, 1, kSequencePointKind_StepOut, 0, 19, 0 } /* seqPointIndex: 19 */,
	{ 13764, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 20, 0 } /* seqPointIndex: 20 */,
	{ 13764, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 21, 0 } /* seqPointIndex: 21 */,
	{ 13764, -1, 2, 25, 25, 17, -1, 0, kSequencePointKind_Normal, 0, 22, 0 } /* seqPointIndex: 22 */,
	{ 13764, -1, 2, 27, 27, 17, -1, 11, kSequencePointKind_Normal, 0, 23, 0 } /* seqPointIndex: 23 */,
	{ 13764, -1, 2, 31, 31, 17, -1, 22, kSequencePointKind_Normal, 0, 24, 0 } /* seqPointIndex: 24 */,
	{ 13764, -1, 2, 33, 33, 17, -1, 29, kSequencePointKind_Normal, 0, 25, 0 } /* seqPointIndex: 25 */,
	{ 13764, -1, 2, 25, 25, 17, -1, 1, kSequencePointKind_StepOut, 0, 26, 0 } /* seqPointIndex: 26 */,
	{ 13764, -1, 2, 27, 27, 17, -1, 12, kSequencePointKind_StepOut, 0, 27, 0 } /* seqPointIndex: 27 */,
	{ 13764, -1, 2, 33, 33, 17, -1, 37, kSequencePointKind_StepOut, 0, 28, 0 } /* seqPointIndex: 28 */,
	{ 13765, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 29, 0 } /* seqPointIndex: 29 */,
	{ 13765, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 30, 0 } /* seqPointIndex: 30 */,
	{ 13765, -1, 2, 15, 15, 36, -1, 0, kSequencePointKind_Normal, 0, 31, 0 } /* seqPointIndex: 31 */,
	{ 13765, -1, 2, 15, 15, 38, -1, 1, kSequencePointKind_Normal, 0, 32, 0 } /* seqPointIndex: 32 */,
	{ 13765, -1, 2, 15, 15, 55, -1, 13, kSequencePointKind_Normal, 0, 33, 0 } /* seqPointIndex: 33 */,
	{ 13766, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 34, 0 } /* seqPointIndex: 34 */,
	{ 13766, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 35, 0 } /* seqPointIndex: 35 */,
	{ 13766, -1, 2, 15, 15, 61, -1, 0, kSequencePointKind_Normal, 0, 36, 0 } /* seqPointIndex: 36 */,
	{ 13766, -1, 2, 15, 15, 63, -1, 1, kSequencePointKind_Normal, 0, 37, 0 } /* seqPointIndex: 37 */,
	{ 13766, -1, 2, 15, 15, 81, -1, 8, kSequencePointKind_Normal, 0, 38, 0 } /* seqPointIndex: 38 */,
	{ 13767, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39, 0 } /* seqPointIndex: 39 */,
	{ 13767, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40, 0 } /* seqPointIndex: 40 */,
	{ 13767, -1, 2, 16, 16, 34, -1, 0, kSequencePointKind_Normal, 0, 41, 0 } /* seqPointIndex: 41 */,
	{ 13767, -1, 2, 16, 16, 36, -1, 1, kSequencePointKind_Normal, 0, 42, 0 } /* seqPointIndex: 42 */,
	{ 13767, -1, 2, 16, 16, 52, -1, 13, kSequencePointKind_Normal, 0, 43, 0 } /* seqPointIndex: 43 */,
	{ 13768, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44, 0 } /* seqPointIndex: 44 */,
	{ 13768, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45, 0 } /* seqPointIndex: 45 */,
	{ 13768, -1, 2, 16, 16, 58, -1, 0, kSequencePointKind_Normal, 0, 46, 0 } /* seqPointIndex: 46 */,
	{ 13768, -1, 2, 16, 16, 60, -1, 1, kSequencePointKind_Normal, 0, 47, 0 } /* seqPointIndex: 47 */,
	{ 13768, -1, 2, 16, 16, 77, -1, 8, kSequencePointKind_Normal, 0, 48, 0 } /* seqPointIndex: 48 */,
	{ 13769, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 49, 0 } /* seqPointIndex: 49 */,
	{ 13769, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 50, 0 } /* seqPointIndex: 50 */,
	{ 13769, -1, 2, 17, 17, 42, -1, 0, kSequencePointKind_Normal, 0, 51, 0 } /* seqPointIndex: 51 */,
	{ 13769, -1, 2, 17, 17, 44, -1, 1, kSequencePointKind_Normal, 0, 52, 0 } /* seqPointIndex: 52 */,
	{ 13769, -1, 2, 17, 17, 64, -1, 13, kSequencePointKind_Normal, 0, 53, 0 } /* seqPointIndex: 53 */,
	{ 13770, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54, 0 } /* seqPointIndex: 54 */,
	{ 13770, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55, 0 } /* seqPointIndex: 55 */,
	{ 13770, -1, 2, 17, 17, 70, -1, 0, kSequencePointKind_Normal, 0, 56, 0 } /* seqPointIndex: 56 */,
	{ 13770, -1, 2, 17, 17, 72, -1, 1, kSequencePointKind_Normal, 0, 57, 0 } /* seqPointIndex: 57 */,
	{ 13770, -1, 2, 17, 17, 93, -1, 8, kSequencePointKind_Normal, 0, 58, 0 } /* seqPointIndex: 58 */,
	{ 13771, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 59, 0 } /* seqPointIndex: 59 */,
	{ 13771, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 60, 0 } /* seqPointIndex: 60 */,
	{ 13771, -1, 2, 18, 18, 44, -1, 0, kSequencePointKind_Normal, 0, 61, 0 } /* seqPointIndex: 61 */,
	{ 13771, -1, 2, 18, 18, 46, -1, 1, kSequencePointKind_Normal, 0, 62, 0 } /* seqPointIndex: 62 */,
	{ 13771, -1, 2, 18, 18, 76, -1, 13, kSequencePointKind_Normal, 0, 63, 0 } /* seqPointIndex: 63 */,
	{ 13772, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64, 0 } /* seqPointIndex: 64 */,
	{ 13772, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65, 0 } /* seqPointIndex: 65 */,
	{ 13772, -1, 2, 18, 18, 82, -1, 0, kSequencePointKind_Normal, 0, 66, 0 } /* seqPointIndex: 66 */,
	{ 13772, -1, 2, 18, 18, 84, -1, 1, kSequencePointKind_Normal, 0, 67, 0 } /* seqPointIndex: 67 */,
	{ 13772, -1, 2, 18, 18, 115, -1, 8, kSequencePointKind_Normal, 0, 68, 0 } /* seqPointIndex: 68 */,
	{ 13773, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69, 0 } /* seqPointIndex: 69 */,
	{ 13773, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70, 0 } /* seqPointIndex: 70 */,
	{ 13773, -1, 2, 19, 19, 38, -1, 0, kSequencePointKind_Normal, 0, 71, 0 } /* seqPointIndex: 71 */,
	{ 13773, -1, 2, 19, 19, 40, -1, 1, kSequencePointKind_Normal, 0, 72, 0 } /* seqPointIndex: 72 */,
	{ 13773, -1, 2, 19, 19, 56, -1, 13, kSequencePointKind_Normal, 0, 73, 0 } /* seqPointIndex: 73 */,
	{ 13774, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 74, 0 } /* seqPointIndex: 74 */,
	{ 13774, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 75, 0 } /* seqPointIndex: 75 */,
	{ 13774, -1, 2, 19, 19, 62, -1, 0, kSequencePointKind_Normal, 0, 76, 0 } /* seqPointIndex: 76 */,
	{ 13774, -1, 2, 19, 19, 64, -1, 1, kSequencePointKind_Normal, 0, 77, 0 } /* seqPointIndex: 77 */,
	{ 13774, -1, 2, 19, 19, 81, -1, 8, kSequencePointKind_Normal, 0, 78, 0 } /* seqPointIndex: 78 */,
	{ 13775, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 79, 0 } /* seqPointIndex: 79 */,
	{ 13775, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 80, 0 } /* seqPointIndex: 80 */,
	{ 13775, -1, 2, 20, 20, 48, -1, 0, kSequencePointKind_Normal, 0, 81, 0 } /* seqPointIndex: 81 */,
	{ 13775, -1, 2, 20, 20, 50, -1, 1, kSequencePointKind_Normal, 0, 82, 0 } /* seqPointIndex: 82 */,
	{ 13775, -1, 2, 20, 20, 73, -1, 13, kSequencePointKind_Normal, 0, 83, 0 } /* seqPointIndex: 83 */,
	{ 13776, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 84, 0 } /* seqPointIndex: 84 */,
	{ 13776, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 85, 0 } /* seqPointIndex: 85 */,
	{ 13776, -1, 2, 20, 20, 79, -1, 0, kSequencePointKind_Normal, 0, 86, 0 } /* seqPointIndex: 86 */,
	{ 13776, -1, 2, 20, 20, 81, -1, 1, kSequencePointKind_Normal, 0, 87, 0 } /* seqPointIndex: 87 */,
	{ 13776, -1, 2, 20, 20, 105, -1, 8, kSequencePointKind_Normal, 0, 88, 0 } /* seqPointIndex: 88 */,
	{ 13777, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 89, 0 } /* seqPointIndex: 89 */,
	{ 13777, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 90, 0 } /* seqPointIndex: 90 */,
	{ 13777, -1, 2, 36, 36, 9, -1, 0, kSequencePointKind_Normal, 0, 91, 0 } /* seqPointIndex: 91 */,
	{ 13777, -1, 2, 37, 37, 13, -1, 1, kSequencePointKind_Normal, 0, 92, 0 } /* seqPointIndex: 92 */,
	{ 13777, -1, 2, 37, 37, 22, -1, 8, kSequencePointKind_Normal, 0, 93, 0 } /* seqPointIndex: 93 */,
	{ 13777, -1, 2, 38, 38, 13, -1, 13, kSequencePointKind_Normal, 0, 94, 0 } /* seqPointIndex: 94 */,
	{ 13777, -1, 2, 38, 38, 22, -1, 20, kSequencePointKind_Normal, 0, 95, 0 } /* seqPointIndex: 95 */,
	{ 13777, -1, 2, 39, 39, 13, -1, 25, kSequencePointKind_Normal, 0, 96, 0 } /* seqPointIndex: 96 */,
	{ 13777, -1, 2, 39, 39, 22, -1, 32, kSequencePointKind_Normal, 0, 97, 0 } /* seqPointIndex: 97 */,
	{ 13777, -1, 2, 40, 40, 13, -1, 37, kSequencePointKind_Normal, 0, 98, 0 } /* seqPointIndex: 98 */,
	{ 13777, -1, 2, 40, 40, 22, -1, 44, kSequencePointKind_Normal, 0, 99, 0 } /* seqPointIndex: 99 */,
	{ 13777, -1, 2, 41, 41, 13, -1, 49, kSequencePointKind_Normal, 0, 100, 0 } /* seqPointIndex: 100 */,
	{ 13777, -1, 2, 41, 41, 22, -1, 56, kSequencePointKind_Normal, 0, 101, 0 } /* seqPointIndex: 101 */,
	{ 13777, -1, 2, 42, 42, 13, -1, 61, kSequencePointKind_Normal, 0, 102, 0 } /* seqPointIndex: 102 */,
	{ 13777, -1, 2, 42, 42, 22, -1, 68, kSequencePointKind_Normal, 0, 103, 0 } /* seqPointIndex: 103 */,
	{ 13777, -1, 2, 43, 43, 9, -1, 73, kSequencePointKind_Normal, 0, 104, 0 } /* seqPointIndex: 104 */,
	{ 13777, -1, 2, 37, 37, 22, -1, 8, kSequencePointKind_StepOut, 0, 105, 0 } /* seqPointIndex: 105 */,
	{ 13777, -1, 2, 38, 38, 22, -1, 20, kSequencePointKind_StepOut, 0, 106, 0 } /* seqPointIndex: 106 */,
	{ 13777, -1, 2, 39, 39, 22, -1, 32, kSequencePointKind_StepOut, 0, 107, 0 } /* seqPointIndex: 107 */,
	{ 13777, -1, 2, 40, 40, 22, -1, 44, kSequencePointKind_StepOut, 0, 108, 0 } /* seqPointIndex: 108 */,
	{ 13777, -1, 2, 41, 41, 22, -1, 56, kSequencePointKind_StepOut, 0, 109, 0 } /* seqPointIndex: 109 */,
	{ 13777, -1, 2, 42, 42, 22, -1, 68, kSequencePointKind_StepOut, 0, 110, 0 } /* seqPointIndex: 110 */,
	{ 13779, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 111, 0 } /* seqPointIndex: 111 */,
	{ 13779, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 112, 0 } /* seqPointIndex: 112 */,
	{ 13779, -1, 3, 10, 10, 80, -1, 0, kSequencePointKind_Normal, 0, 113, 0 } /* seqPointIndex: 113 */,
	{ 13779, -1, 3, 10, 10, 82, -1, 1, kSequencePointKind_Normal, 0, 114, 0 } /* seqPointIndex: 114 */,
	{ 13779, -1, 3, 10, 10, 90, -1, 3, kSequencePointKind_Normal, 0, 115, 0 } /* seqPointIndex: 115 */,
	{ 13779, -1, 3, 10, 10, 113, -1, 8, kSequencePointKind_Normal, 0, 116, 0 } /* seqPointIndex: 116 */,
	{ 13779, -1, 3, 10, 10, 90, -1, 3, kSequencePointKind_StepOut, 0, 117, 0 } /* seqPointIndex: 117 */,
	{ 13780, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 118, 0 } /* seqPointIndex: 118 */,
	{ 13780, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 119, 0 } /* seqPointIndex: 119 */,
	{ 13780, -1, 3, 13, 13, 103, -1, 0, kSequencePointKind_Normal, 0, 120, 0 } /* seqPointIndex: 120 */,
	{ 13780, -1, 3, 13, 13, 104, -1, 1, kSequencePointKind_Normal, 0, 121, 0 } /* seqPointIndex: 121 */,
	{ 13781, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 122, 0 } /* seqPointIndex: 122 */,
	{ 13781, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 123, 0 } /* seqPointIndex: 123 */,
	{ 13781, -1, 3, 15, 15, 9, -1, 0, kSequencePointKind_Normal, 0, 124, 0 } /* seqPointIndex: 124 */,
	{ 13781, -1, 3, 16, 16, 13, -1, 1, kSequencePointKind_Normal, 0, 125, 0 } /* seqPointIndex: 125 */,
	{ 13781, -1, 3, 17, 17, 13, -1, 9, kSequencePointKind_Normal, 0, 126, 0 } /* seqPointIndex: 126 */,
	{ 13781, -1, 3, 17, 17, 13, -1, 14, kSequencePointKind_Normal, 0, 127, 0 } /* seqPointIndex: 127 */,
	{ 13781, -1, 3, 18, 18, 13, -1, 19, kSequencePointKind_Normal, 0, 128, 0 } /* seqPointIndex: 128 */,
	{ 13781, -1, 3, 19, 19, 9, -1, 26, kSequencePointKind_Normal, 0, 129, 0 } /* seqPointIndex: 129 */,
	{ 13781, -1, 3, 17, 17, 13, -1, 14, kSequencePointKind_StepOut, 0, 130, 0 } /* seqPointIndex: 130 */,
	{ 13782, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 131, 0 } /* seqPointIndex: 131 */,
	{ 13782, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 132, 0 } /* seqPointIndex: 132 */,
	{ 13782, -1, 3, 22, 22, 130, -1, 0, kSequencePointKind_Normal, 0, 133, 0 } /* seqPointIndex: 133 */,
	{ 13782, -1, 3, 22, 22, 132, -1, 1, kSequencePointKind_Normal, 0, 134, 0 } /* seqPointIndex: 134 */,
	{ 13782, -1, 3, 22, 22, 146, -1, 8, kSequencePointKind_Normal, 0, 135, 0 } /* seqPointIndex: 135 */,
	{ 13783, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 136, 0 } /* seqPointIndex: 136 */,
	{ 13783, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 137, 0 } /* seqPointIndex: 137 */,
	{ 13783, -1, 3, 24, 24, 9, -1, 0, kSequencePointKind_Normal, 0, 138, 0 } /* seqPointIndex: 138 */,
	{ 13783, -1, 3, 25, 25, 13, -1, 1, kSequencePointKind_Normal, 0, 139, 0 } /* seqPointIndex: 139 */,
	{ 13783, -1, 3, 26, 26, 13, -1, 9, kSequencePointKind_Normal, 0, 140, 0 } /* seqPointIndex: 140 */,
	{ 13783, -1, 3, 26, 26, 13, -1, 14, kSequencePointKind_Normal, 0, 141, 0 } /* seqPointIndex: 141 */,
	{ 13783, -1, 3, 27, 27, 13, -1, 20, kSequencePointKind_Normal, 0, 142, 0 } /* seqPointIndex: 142 */,
	{ 13783, -1, 3, 28, 28, 9, -1, 27, kSequencePointKind_Normal, 0, 143, 0 } /* seqPointIndex: 143 */,
	{ 13783, -1, 3, 26, 26, 13, -1, 14, kSequencePointKind_StepOut, 0, 144, 0 } /* seqPointIndex: 144 */,
	{ 13784, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 145, 0 } /* seqPointIndex: 145 */,
	{ 13784, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 146, 0 } /* seqPointIndex: 146 */,
	{ 13784, -1, 3, 31, 31, 91, -1, 0, kSequencePointKind_Normal, 0, 147, 0 } /* seqPointIndex: 147 */,
	{ 13784, -1, 3, 31, 31, 93, -1, 1, kSequencePointKind_Normal, 0, 148, 0 } /* seqPointIndex: 148 */,
	{ 13784, -1, 3, 31, 31, 107, -1, 8, kSequencePointKind_Normal, 0, 149, 0 } /* seqPointIndex: 149 */,
	{ 13787, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 150, 0 } /* seqPointIndex: 150 */,
	{ 13787, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 151, 0 } /* seqPointIndex: 151 */,
	{ 13787, -1, 4, 375, 375, 61, -1, 0, kSequencePointKind_Normal, 0, 152, 0 } /* seqPointIndex: 152 */,
	{ 13787, -1, 4, 375, 375, 63, -1, 1, kSequencePointKind_Normal, 0, 153, 0 } /* seqPointIndex: 153 */,
	{ 13787, -1, 4, 375, 375, 81, -1, 8, kSequencePointKind_Normal, 0, 154, 0 } /* seqPointIndex: 154 */,
	{ 13788, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 155, 0 } /* seqPointIndex: 155 */,
	{ 13788, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 156, 0 } /* seqPointIndex: 156 */,
	{ 13788, -1, 4, 376, 376, 58, -1, 0, kSequencePointKind_Normal, 0, 157, 0 } /* seqPointIndex: 157 */,
	{ 13788, -1, 4, 376, 376, 60, -1, 1, kSequencePointKind_Normal, 0, 158, 0 } /* seqPointIndex: 158 */,
	{ 13788, -1, 4, 376, 376, 77, -1, 8, kSequencePointKind_Normal, 0, 159, 0 } /* seqPointIndex: 159 */,
	{ 13789, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 160, 0 } /* seqPointIndex: 160 */,
	{ 13789, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 161, 0 } /* seqPointIndex: 161 */,
	{ 13789, -1, 4, 377, 377, 70, -1, 0, kSequencePointKind_Normal, 0, 162, 0 } /* seqPointIndex: 162 */,
	{ 13789, -1, 4, 377, 377, 72, -1, 1, kSequencePointKind_Normal, 0, 163, 0 } /* seqPointIndex: 163 */,
	{ 13789, -1, 4, 377, 377, 93, -1, 8, kSequencePointKind_Normal, 0, 164, 0 } /* seqPointIndex: 164 */,
	{ 13790, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 165, 0 } /* seqPointIndex: 165 */,
	{ 13790, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 166, 0 } /* seqPointIndex: 166 */,
	{ 13790, -1, 4, 378, 378, 73, -1, 0, kSequencePointKind_Normal, 0, 167, 0 } /* seqPointIndex: 167 */,
	{ 13790, -1, 4, 378, 378, 75, -1, 1, kSequencePointKind_Normal, 0, 168, 0 } /* seqPointIndex: 168 */,
	{ 13790, -1, 4, 378, 378, 97, -1, 8, kSequencePointKind_Normal, 0, 169, 0 } /* seqPointIndex: 169 */,
	{ 13791, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 170, 0 } /* seqPointIndex: 170 */,
	{ 13791, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 171, 0 } /* seqPointIndex: 171 */,
	{ 13791, -1, 4, 379, 379, 62, -1, 0, kSequencePointKind_Normal, 0, 172, 0 } /* seqPointIndex: 172 */,
	{ 13791, -1, 4, 379, 379, 64, -1, 1, kSequencePointKind_Normal, 0, 173, 0 } /* seqPointIndex: 173 */,
	{ 13791, -1, 4, 379, 379, 81, -1, 8, kSequencePointKind_Normal, 0, 174, 0 } /* seqPointIndex: 174 */,
	{ 13792, -1, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 175, 0 } /* seqPointIndex: 175 */,
	{ 13792, -1, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 176, 0 } /* seqPointIndex: 176 */,
	{ 13792, -1, 4, 380, 380, 84, -1, 0, kSequencePointKind_Normal, 0, 177, 0 } /* seqPointIndex: 177 */,
	{ 13792, -1, 4, 380, 380, 86, -1, 1, kSequencePointKind_Normal, 0, 178, 0 } /* seqPointIndex: 178 */,
	{ 13792, -1, 4, 380, 380, 110, -1, 8, kSequencePointKind_Normal, 0, 179, 0 } /* seqPointIndex: 179 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_TilemapModule[1] = { { 0, 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\ITilemap.cs", { 137, 108, 137, 205, 193, 245, 162, 101, 198, 216, 241, 247, 36, 214, 147, 143} }, //1 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\Tile.cs", { 206, 203, 170, 147, 198, 244, 20, 12, 221, 79, 91, 222, 40, 160, 124, 2} }, //2 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\Managed\\TileBase.cs", { 162, 44, 192, 158, 78, 85, 124, 252, 188, 247, 49, 168, 245, 155, 73, 206} }, //3 
{ "C:\\buildslave\\unity\\build\\Modules\\Tilemap\\ScriptBindings\\Tilemap.bindings.cs", { 255, 65, 40, 117, 53, 103, 143, 185, 67, 28, 210, 65, 97, 146, 107, 208} }, //4 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[4] = 
{
	{ 2418, 1 },
	{ 2419, 2 },
	{ 2421, 3 },
	{ 2424, 4 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[11] = 
{
	{ 0, 24 },
	{ 0, 15 },
	{ 0, 15 },
	{ 0, 15 },
	{ 0, 15 },
	{ 0, 15 },
	{ 0, 15 },
	{ 0, 28 },
	{ 0, 10 },
	{ 0, 29 },
	{ 0, 10 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[32] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.ITilemap::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 24, 0, 1 } /* UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::.ctor() */,
	{ 15, 1, 1 } /* UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite) */,
	{ 15, 2, 1 } /* UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color) */,
	{ 15, 3, 1 } /* UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4) */,
	{ 15, 4, 1 } /* UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject) */,
	{ 15, 5, 1 } /* UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 15, 6, 1 } /* UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::.ctor() */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */,
	{ 28, 7, 1 } /* UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 10, 8, 1 } /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */,
	{ 29, 9, 1 } /* UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */,
	{ 10, 10, 1 } /* System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_TilemapModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_TilemapModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	180,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_TilemapModule,
	4,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
