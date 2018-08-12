//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FaceRecogBaseHandler.h"

#import "FaceRecogVerifyViewControllerDelegate.h"

@class FaceRecogVerifyViewController, NSString;

@interface FaceRecogReadNumHandler : FaceRecogBaseHandler <FaceRecogVerifyViewControllerDelegate>
{
    FaceRecogVerifyViewController *_verifyVc;
}

@property(retain, nonatomic) FaceRecogVerifyViewController *verifyVc; // @synthesize verifyVc=_verifyVc;
- (void).cxx_destruct;
- (void)procedureDidGotFrameResult:(unsigned long long)arg1 failedType:(long long)arg2;
- (void)reportUserCancel;
- (void)startRecognizingProcedure;
- (void)faceRecogVerifyViewNumberViewDidEndAnimation;
- (void)faceRecogDidStartChangeToReadNumberMode;
- (void)didAccessAudio;
- (void)didDetectFace;
- (void)doStartDetectFace;
- (void)didAccessConfig;
- (void)didAccessVideo;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
