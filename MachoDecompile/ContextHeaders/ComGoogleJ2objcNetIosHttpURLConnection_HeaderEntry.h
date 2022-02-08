// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMGOOGLEJ2OBJCNETIOSHTTPURLCONNECTION_HEADERENTRY_H
#define COMGOOGLEJ2OBJCNETIOSHTTPURLCONNECTION_HEADERENTRY_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap_Entry-Protocol.h"

@interface ComGoogleJ2objcNetIosHttpURLConnection_HeaderEntry : NSObject <JavaUtilMap_Entry>

 {
    NSString *key_;
    NSString *value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)getKey;
-(id)getValue;
-(id)setValueWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif