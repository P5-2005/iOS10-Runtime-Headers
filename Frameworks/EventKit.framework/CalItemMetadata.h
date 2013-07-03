/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDictionary;

@interface CalItemMetadata : NSObject <NSCoding> {
    NSDictionary *_x_props;
    int _classification;
}

@property(retain) NSDictionary * x_props;
@property int classification;

+ (id)metadataWithICSComponent:(id)arg1;
+ (id)metadataWithData:(id)arg1;

- (id)x_props;
- (id)dataRepresentationWithExistingMetaData:(id)arg1;
- (void)applyToComponent:(id)arg1;
- (id)initWithICSComponent:(id)arg1;
- (void)setX_props:(id)arg1;
- (void)setClassification:(int)arg1;
- (int)classification;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end