// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLOGGINGLEVEL_H
#define JAVAUTILLOGGINGLEVEL_H


#import <Foundation/Foundation.h>

#import "JavaUtilResourceBundle.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilLoggingLevel : NSObject <JavaIoSerializable>

 {
    NSString *name_;
    int value_;
    NSString *resourceBundleName_;
    JavaUtilResourceBundle *rb_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withNSString:(id)arg2 ;
-(id)getName;
-(id)getResourceBundleName;
-(int)intValue;
-(id)readResolve;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(id)getLocalizedName;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(id)parseWithNSString:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif