// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTFIELDPOSITION_H
#define JAVATEXTFIELDPOSITION_H


#import <Foundation/Foundation.h>

#import "JavaTextFormat_Field.h"

@interface JavaTextFieldPosition : NSObject {
    int field_;
    int beginIndex_;
    int endIndex_;
    JavaTextFormat_Field *attribute_;
}




-(id)initWithInt:(int)arg0 ;
-(id)initWithJavaTextFormat_Field:(id)arg0 ;
-(id)initWithJavaTextFormat_Field:(id)arg0 withInt:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(int)getBeginIndex;
-(int)getEndIndex;
-(int)getField;
-(id)getFieldAttribute;
-(NSUInteger)hash;
-(void)setBeginIndexWithInt:(int)arg0 ;
-(void)setEndIndexWithInt:(int)arg0 ;
-(id)description;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif