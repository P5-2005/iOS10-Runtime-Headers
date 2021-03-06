/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
 */

@interface IFFeatureMatch : NSObject <NSCopying, NSSecureCoding> {
    NSString * _client;
    NSString * _term;
    NSString * _type;
}

@property (copy) NSString *client;
@property (copy) NSString *term;
@property (copy) NSString *type;

+ (id)featureMatchWithType:(id)arg1 term:(id)arg2 client:(id)arg3;
+ (id)featureMatchWithValuesFromFeature:(id)arg1;
+ (double)scaleValueForFeature:(id)arg1 scaling:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)client;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 term:(id)arg2 client:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFeatureMatch:(id)arg1;
- (bool)matches:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setTerm:(id)arg1;
- (void)setType:(id)arg1;
- (id)term;
- (id)type;

@end
