/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHARemoteMessage : AXHAMessage {
    NSString *_UUID;
    id /* block */ _sendCompletion;
}

@property (nonatomic, retain) NSString *UUID;
@property (nonatomic, copy) id /* block */ sendCompletion;

+ (id)messageWithPayload:(id)arg1 andSendCompletion:(id /* block */)arg2;

- (id)UUID;
- (void)dealloc;
- (id)initWithPayload:(id)arg1;
- (id /* block */)sendCompletion;
- (void)setSendCompletion:(id /* block */)arg1;
- (void)setUUID:(id)arg1;
- (id)transportPayload;

@end