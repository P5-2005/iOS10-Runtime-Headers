/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerOutputContent : NSObject {
    ISCrossfadeItem * _crossfadeItem;
    ISLayerPlayer * _crossfadePlayer;
    struct CGImage { } * _photo;
    int  _photoEXIFOrientation;
    ISWrappedAVPlayer * _videoPlayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoSize;
}

@property (nonatomic, readonly) ISCrossfadeItem *crossfadeItem;
@property (nonatomic, readonly) ISLayerPlayer *crossfadePlayer;
@property (nonatomic, readonly) struct CGImage { }*photo;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } videoSize;

- (void).cxx_destruct;
- (id)crossfadeItem;
- (id)crossfadePlayer;
- (void)dealloc;
- (id)description;
- (id)initWithPhoto:(struct CGImage { }*)arg1 photoEXIFOrientation:(int)arg2 videoPlayer:(id)arg3 videoSize:(struct CGSize { double x1; double x2; })arg4 crossfadePlayer:(id)arg5 crossfadeItem:(id)arg6;
- (struct CGImage { }*)photo;
- (int)photoEXIFOrientation;
- (id)videoPlayer;
- (struct CGSize { double x1; double x2; })videoSize;

@end