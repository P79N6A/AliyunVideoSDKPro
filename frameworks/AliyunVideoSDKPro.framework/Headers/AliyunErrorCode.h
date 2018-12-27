//
//  AliyunErrorCode.h
//  QUSDK
//
//  Created by Vienta on 2017/10/17.
//  Copyright © 2017年 Alibaba Group Holding Limited. All rights reserved.
//

#import <Foundation/Foundation.h>


//线程（资源）
#define ERROR_TRES_ -500001
//权限(包含设备权限和SDK权限）
#define ERROR_PERM_ -600001
//参数
#define ERROR_ARG_ -700001
//其他
#define ERROR_PUB_ -800001
//多媒体编解码
#define ERROR_MEDIA_ -100001

// deprecated
typedef enum : int {
    ERROR_VIDEO_PATH_NULL = ERROR_ARG_ - 1,//输入视频路径为空
    
    ERROR_TRANSCODE_INIT_PARAM_INVALID = ERROR_ARG_ - 3, //转码初始化方法参数错误
    ERROR_SIZE_INVALID = ERROR_ARG_ - 4,//视频尺寸设置不正确
//    ERROR_NO_VIDEO = ERROR_ARG_ + 5,//没有添加视频文件
    ERROR_PARAM_AUDIO_VIDEO_DURATION_INVALID = ERROR_ARG_ - 8,//视频或音频时长设置异常
    ERROR_PARAM_FADEDURATION_INVALID = ERROR_ARG_ - 9,//过渡动画时长参数异常
    ERROR_PARAM_GIF_FILE_PATH_INVALID = ERROR_ARG_ - 10,//动图路径异常
    ERROR_PARAM_RESOURCE_PARSE_INVALID = ERROR_ARG_ - 11,//资源解析异常
    ERROR_PARAM_IMAGE_FILE_PATH_INVALID = ERROR_ARG_ - 12,//图片路径异常
    ERROR_PARAM_FILTER_FILE_PATH_INVALID = ERROR_ARG_ - 13,//滤镜路径异常
    
    ERROR_START_MULTI = ERROR_TRES_ - 4,//多次调用异常
    ERROR_AUDIO_INPUTS_INVALID = ERROR_TRES_ - 5,//音频输入流异常
    ERROR_SCREENRENDER_INVALID = ERROR_TRES_ - 6,//视频渲染类异常
    ERROR_RECODRD_DEYOND_MAX_DURATION = ERROR_TRES_ - 14,//录制视频超过最大录制时长
    
    ERROR_MEDIA_NOT_SUPPORTED_VIDEO = ERROR_MEDIA_ - 1,//不支持的视频格式
    ERROR_MEDIA_NOT_SUPPORTED_AUDIO = ERROR_MEDIA_ - 2,//不支持的音频格式
    ERROR_MEDIA_NOT_SUPPORTED_IMAGE = ERROR_MEDIA_ - 3,//不支持的图片格式 TODO:确认有没有用
    ERROR_MEDIA_NOT_SUPPORTED_TYPE = ERROR_MEDIA_ - 4, //不支持的媒体类型 TODO:确认有没有用
    ERROR_MEDIA_VIDEO_ENCODER_INTERNAL = ERROR_MEDIA_ - 9,//视频编码器内部错误
    ERROR_MEDIA_AUDIO_ENCODER_INTERNAL = ERROR_MEDIA_ - 5,//音频编码器内部错误
    ERROR_MEDIA_VIDEO_ENCODER_PARAM = ERROR_MEDIA_ - 10,//视频编码器参数错误
    ERROR_MEDIA_AUDIO_ENCODER_PARAM = ERROR_MEDIA_ - 11,//音频编码器参数错误
    ERROR_MEDIA_VIDEO_DECODER_INTERNAL = ERROR_MEDIA_ - 8,//视频解码器内部错误
    ERROR_MEDIA_AUDIO_DECODER_INTERNAL = ERROR_MEDIA_ - 13,//音频解码器内部错误
    ERROR_MEDIA_CROP_IMAGE_FAILURE = ERROR_MEDIA_ - 6,//裁剪图片失败  TODO://上层裁剪图片失败
    ERROR_MEDIA_NOT_SUPPORTED_PIXEL_FORMAT = ERROR_MEDIA_ - 7,//TODO:安卓验证
    ERROR_MEDIA_PLAYER_INTERNAL = ERROR_MEDIA_ - 14,//播放器内部错误
    ERROR_CROP_PARAM = ERROR_ARG_ - 8,//裁剪参数有误
    
} AliyunIErrorCode __deprecated_msg("will not use anymore");


// 内部错误
enum AliyunVideoCoreError {

    ALIVC_COMMON_INVALID_STATE = -4,
    ALIVC_COMMON_UNKNOWN_ERROR_CODE = -3,
    ALIVC_COMMON_INVALID_PARAM = -2,
    ALIVC_COMMON_RETURN_FAILED = -1,
    ALIVC_COMMON_RETURN_SUCCESS = 0x00000000,
    
    ALIVC_FRAMEWORK_ERROR_START = 0x10000000,
    ALIVC_FRAMEWORK_ERROR_THREAD_EXIT,
    ALIVC_FRAMEWORK_DISPATCH_MSG_FAILED,
    ALIVC_FRAMEWORK_IS_SYNC_MSG,
    ALIVC_FRAMEWORK_SEND_SYNC_MSG_TIME_OUT,
    ALIVC_FRAMEWORK_ERROR_MSG_QUEUE_FULL,
    ALIVC_FRAMEWORK_ERROR_SERVICE_IS_ALREADY_EXIST,
    ALIVC_FRAMEWORK_ERROR_SERVICE_CHANGE_STATE_NULL,
    ALIVC_FRAMEWORK_ERROR_SERVICE_CHANGE_PREPARED_STATE_FAILED,
    ALIVC_FRAMEWORK_ERROR_SERVICE_CHANGE_PLAYING_STATE_FAILED,
    ALIVC_FRAMEWORK_ERROR_SERVICE_CHANGE_INITED_STATE_FAILED,
    
    ALIVC_FRAMEWORK_MUXER_ERROR_START = 0x10001000,
    ALIVC_FRAMEWORK_DEMUXER_INIT_MULTI_TIMES,
    ALIVC_FRAMEWORK_DEMUXER_OPEN_FILE_FAILED,
    ALIVC_FRAMEWORK_DEMUXER_FIND_STREAM_INFO_FAILED,
    

    ALIVC_FRAMEWORK_DECODER_ERROR_START = 0x10002000,
    ALIVC_FRAMEWORK_VIDEO_DECODER_QUEUE_FULL_WARNING,
    ALIVC_FRAMEWORK_VIDEO_DECODER_SPS_PPS_NULL,
    ALIVC_FRAMEWORK_VIDEO_DECODER_CREATE_H264_PARAM_SET_FAILED,
    ALIVC_FRAMEWORK_VIDEO_DECODER_CREATE_HEVC_PARAM_SET_FAILED,

    ALIVC_FRAMEWORK_VIDEO_ENCODER_ERROR_START = 0x10003000,
    ALIVC_FRAMEWORK_VIDEO_ENCODER_QUEUE_EMPTY_WARNING,
    ALIVC_FRAMEWORK_VIDEO_ENCODER_QUEUE_FULL_WARNING,
    ALIVC_FRAMEWORK_VIDEO_DECODER_QUEUE_EMPTY_WARNING,
    ALIVC_FRAMEWORK_VIDEO_DECODER_CREATE_DECODER_FAILED,
    ALIVC_FRAMEWORK_VIDEO_DECODER_ERROR_STATE,
    ALIVC_FRAMEWORK_VIDEO_DECODER_ERROR_INPUT,
    ALIVC_FRAMEWORK_VIDEO_DECODER_ERROR_NO_BUFFER_AVAILABLE,
    ALIVC_FRAMEWORK_VIDEO_DECODER_ERROR_INTERRUPT,
    ALIVC_FRAMEWORK_VIDEO_DECODER_ERROR_DECODE_SPS,
    
    ALIVC_FRAMEWORK_VIDEO_ENCODER_CREATE_ENCODER_FAILED,
    ALIVC_FRAMEWORK_VIDEO_ENCODER_WIDTHOUT_MATCH_ENCODER,
    ALIVC_FRAMEWORK_VIDEO_ENCODER_ERROR_WITHOUT_WORK,
    ALIVC_FRAMEWORK_VIDEO_ENCODER_ERROR_INTERRUPT,
    ALIVC_FRAMEWORK_VIDEO_DECODER_ERROR_RESOURCE_PREEMPTED,
    ALIVC_FRAMEWORK_VIDEO_DECODER_ERROR_DECODE_PACKET,
    
    ALIVC_FRAMEWORK_VIDEO_ENCODER_ERROR_ANDROID_API_LEVEL = 0x10003100,
    ALIVC_FRAMEWORK_VIDEO_ENCODER_ERROR_STATE  = 0x10003101,
    ALIVC_FRAMEWORK_VIDEO_ENCODER_ERROR_INPUT = 0x10003102,
    ALIVC_FRAMEWORK_VIDEO_ENCODER_ERROR_NO_BUFFER_AVAILABLE = 0x10003103,
    
    ALIVC_FRAMEWORK_AUDIO_ENCODER_INIT_FAILED = 0x10003203,
    ALIVC_FRAMEWORK_AUDIO_ENCODER_ERROR_STATE,
    ALIVC_FRAMEWORK_AUDIO_ENCODER_ERROR_INPUT,
    ALIVC_FRAMEWORK_AUDIO_ENCODER_ERROR_INTERRUPT,
    ALIVC_FRAMEWORK_AUDIO_ENCODER_ERROR_WITHOUT_WORK,
    ALIVC_FRAMEWORK_AUDIO_ENCODER_WIDTHOUT_MATCH_ENCODER,
    
    ALIVC_FRAMEWORK_AUDIO_DECODER_QUEUE_EMPTY_WARNING = 0x10003300,
    ALIVC_FRAMEWORK_AUDIO_DECODER_QUEUE_FULL_WARNING,
    ALIVC_FRAMEWORK_AUDIO_DECODER_CREATE_DECODER_FAILED,
    ALIVC_FRAMEWORK_AUDIO_DECODER_ERROR_STATE,
    ALIVC_FRAMEWORK_AUDIO_DECODER_ERROR_INPUT,
    ALIVC_FRAMEWORK_AUDIO_DECODER_ERROR_NO_BUFFER_AVAILABLE,
    
    ALIVC_FRAMEWORK_RENDER_ERROR_START = 0x10004000,
    ALIVC_FRAMEWORK_RENDER_FIRST_FRAME_PREVIEWED,
    ALIVC_FRAMEWORK_RENDER_ERROR_EGL,
    ALIVC_FRAMEWORK_RENDER_ERROR_GL,
    ALIVC_FRAMEWORK_RENDER_ERROR_INVALID_DATA,
    ALIVC_FRAMEWORK_RENDER_ERROR_INVALID_OPERATION,
    ALIVC_FRAMEWORK_RENDER_ERROR_EDITORLAYOUT_INVALID_SIZE,
    ALIVC_FRAMEWORK_RENDER_ERROR_SCENE_INVALID,
    ALIVC_FRAMEWORK_RENDER_ERROR_INVALID_OPTION,
    ALIVC_FRAMEWORK_RENDER_ERROR_LAYOUT_NOT_INIT,
    
    ALIVC_PUSHER_ERROR_SDK_CAPTURE_START = 0x10005000,
    ALIVC_PUSHER_ERROR_SDK_CAPTURE_INVALID_STATE,
    ALIVC_PUSHER_ERROR_SDK_CAPTURE_INIT_FAILED,
    ALIVC_PUSHER_ERROR_SDK_CAPTURE_CAMERA_OPEN_FAILED,
    ALIVC_PUSHER_ERROR_SDK_CAPTURE_MIC_OPEN_FAILED,
    ALIVC_PUSHER_ERROR_SDK_CAPTURE_AUDIO_START_FAIL,
    ALIVC_PUSHER_ERROR_SDK_CAPTURE_VIDEO_START_FAIL,
    
    ALIVC_PUSHER_EVENT_CAPTURE_START = 0x10005500,
    ALIVC_PUSHER_EVENT_CAPTURE_OPEN_CAMERA_SUCCESS,
    ALIVC_PUSHER_EVENT_CAPTURE_OPEN_MIC_SUCCESS,
    ALIVC_PUSHER_EVENT_CAPTURE_CLOSE_CAMERA_SUCCESS,
    
    
    ALIVC_FRAMEWORK_MUXER_ERROR_CREAT_OUTPUT = 0x10006000,
    ALIVC_FRAMEWORK_MUXER_ERROR_CREATE_ACTX ,
    ALIVC_FRAMEWORK_MUXER_ERROR_CREATE_STREAM ,
    ALIVC_FRAMEWORK_MUXER_ERROR_CREATE_VCTX ,
    ALIVC_FRAMEWORK_MUXER_ERROR_INPUT_PACKET,
    ALIVC_FRAMEWORK_MUXER_ERROR_VIDEO_AUDIO_UNSET,
    ALIVC_FRAMEWORK_MUXER_ERROR_STATE,
    ALIVC_FRAMEWORK_MUXER_ERROR_WRITE_HEADER,
    ALIVC_FRAMEWORK_MUXER_ERROR_WRITE_TRAILER,
    ALIVC_FRAMEWORK_MUXER_ERROR_INVALIDATE_PARAM,
    ALIVC_FRAMEWORK_MUXER_ERROR_FIND_ENCODER,
    ALIVC_FRAMEWORK_MUXER_ERROR_NEW_STREAM,
    ALIVC_FRAMEWORK_MUXER_ERROR_NEW_ALLOC_OUTPUT_CONTEXT,
    ALIVC_FRAMEWORK_MUXER_ERROR_AVIO_OPEN,
    
    
    
    
    ALIVC_FRAMEWORK_DEMUXER_ERROR_IN_END = 0x10007000,
    ALIVC_FRAMEWORK_DEMUXER_ERROR_INPUT_FILE ,

    ALIVC_FRAMEWORK_MEDIA_POOL_WRONG_STATE = 0x10008000,
    ALIVC_FRAMEWORK_MEDIA_POOL_PROCESS_FAILED,
    ALIVC_FRAMEWORK_MEDIA_POOL_NO_FREE_DISK_SPACE,
    ALIVC_FRAMEWORK_MEDIA_POOL_CREATE_DECODE_GOP_TASK_FAILED,
    ALIVC_FRAMEWORK_MEDIA_POOL_AUDIO_STREAM_DECODER_INIT_FAILED,
    ALIVC_FRAMEWORK_MEDIA_POOL_VIDEO_STREAM_DECODER_INIT_FAILED,
    ALIVC_FRAMEWORK_MEDIA_POOL_CACHE_DATA_SIZE_OVERFLOW,
    ALIVC_FRAMEWORK_MEDIA_POOL_STREAM_NOT_EXISTS,
    
    ALIVC_FRAMEWORK_AUDIO_PROCESS_START = 0x10009000,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_CREATE_FAILED,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_RE_CREATE,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_DESTROY_FAILED,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_RE_DESTROY,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_FILE_STREAM_LIST_FAILED,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_OPTION_LIST_FAILED,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_ADD_FRAME_INPUT_FAILED,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_ADD_FRAME_BUFFER_FULL,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_CTL_INPUT_ERROR,
    ALIVC_FRAMEWORK_AUDIO_PROCESS_SEEK_FAILED,
    
    
    ALIVC_FRAMEWORK_AUDIO_RENDER_START = 0x1000A000,
    ALIVC_FRAMEWORK_AUDIO_RENDER_INIT_SPEAKER_FAILED,
    
    
    ALIVC_PLAYER_ERROR_START = 0x20000000,
    
    
    
    ALIVC_LIVE_ERROR_START = 0x30000000,
    
    
    ALIVC_SVIDEO_ERROR_START = 0x40000000,

    ALIVC_FRAMEWORK_EVENT_START = 0xF0010000,
    
    
    ALIVC_PLAYER_EVENT_START = 0xF0020000,
    
    
    ALIVC_LIVE_EVENT_START = 0xF0030000,
    
    
    ALIVC_SVIDEO_EVENT_START = 0xF0040000,
    
    
    ALIVC_RESERVE_ERROR_START = 0xF0F00000,
    

    ALIVC_RESERVE_END_TAG = 0xFFFFFF00,
};

// 可处理错误
enum AliyunVideoError {
    // license校验失败
    ALIV_LICENSE_CHECK_FAILED = 1001,
    // 文件错误
    ALIV_FRAMEWORK_DEMUXER_ERROR_INPUT_FILE =
    ALIVC_FRAMEWORK_DEMUXER_ERROR_INPUT_FILE,
    // 磁盘空间不足
    ALIV_FRAMEWORK_MEDIA_POOL_NO_FREE_DISK_SPACE =
    ALIVC_FRAMEWORK_MEDIA_POOL_NO_FREE_DISK_SPACE,
    // 缓存已满
    ALIV_FRAMEWORK_MEDIA_POOL_CACHE_DATA_SIZE_OVERFLOW =
    ALIVC_FRAMEWORK_MEDIA_POOL_CACHE_DATA_SIZE_OVERFLOW,
    
};


@interface AliyunErrorCode : NSObject

+ (AliyunIErrorCode)code:(int)err __deprecated_msg("will not use anymore");



@end
