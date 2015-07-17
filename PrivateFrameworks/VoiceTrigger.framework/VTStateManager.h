/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTStateManager : NSObject {
    id /* block */ _callback;
}

+ (id)_serviceClient;
+ (BOOL)enabledByAssertion;
+ (BOOL)onBattery;
+ (void)requestVoiceTriggerEnabled:(BOOL)arg1 forReason:(id)arg2;
+ (void)requestVoiceTriggerEnabledForAlert;
+ (void)suggestVoiceTriggerThresholdLevel:(int)arg1 forReason:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStateTransitionCallback:(id /* block */)arg1;
- (void)notify:(BOOL)arg1;

@end