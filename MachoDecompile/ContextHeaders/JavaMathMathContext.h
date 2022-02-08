// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAMATHMATHCONTEXT_H
#define JAVAMATHMATHCONTEXT_H


#import <Foundation/Foundation.h>

#import "JavaMathRoundingModeEnum.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaMathMathContext : NSObject <JavaIoSerializable>

 {
    int precision_;
    JavaMathRoundingModeEnum *roundingMode_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withJavaMathRoundingModeEnum:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(int)getPrecision;
-(id)getRoundingMode;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif