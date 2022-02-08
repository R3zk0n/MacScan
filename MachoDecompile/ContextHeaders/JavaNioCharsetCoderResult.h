// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHARSETCODERRESULT_H
#define JAVANIOCHARSETCODERRESULT_H


#import <Foundation/Foundation.h>


@interface JavaNioCharsetCoderResult : NSObject {
    int type_;
    int length_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(BOOL)isUnderflow;
-(BOOL)isError;
-(BOOL)isMalformed;
-(BOOL)isOverflow;
-(BOOL)isUnmappable;
-(int)length;
-(void)throwException;
-(id)description;
+(id)malformedForLengthWithInt:(int)arg0 ;
+(id)unmappableForLengthWithInt:(int)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif