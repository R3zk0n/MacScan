// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREICUNATIVEDECIMALFORMAT_FIELDPOSITIONITERATOR_H
#define LIBCOREICUNATIVEDECIMALFORMAT_FIELDPOSITIONITERATOR_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"

@interface LibcoreIcuNativeDecimalFormat_FieldPositionIterator : NSObject {
    IOSIntArray *data_;
    int pos_;
}




-(id)init;
-(BOOL)next;
-(void)checkValid;
-(int)fieldId;
-(id)field;
-(int)start;
-(int)limit;
-(void)setDataWithIntArray:(id)arg0 ;
-(void)dealloc;
+(id)forFieldPositionWithJavaTextFieldPosition:(id)arg0 ;
+(int)getNativeFieldPositionIdWithJavaTextFieldPosition:(id)arg0 ;
+(void)setFieldPositionWithLibcoreIcuNativeDecimalFormat_FieldPositionIterator:(id)arg0 withJavaTextFieldPosition:(id)arg1 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif