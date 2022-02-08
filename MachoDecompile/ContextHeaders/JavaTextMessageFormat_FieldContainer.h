// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTMESSAGEFORMAT_FIELDCONTAINER_H
#define JAVATEXTMESSAGEFORMAT_FIELDCONTAINER_H


#import <Foundation/Foundation.h>

#import "JavaTextAttributedCharacterIterator_Attribute.h"

@interface JavaTextMessageFormat_FieldContainer : NSObject {
    int start_;
    int end_;
    JavaTextAttributedCharacterIterator_Attribute *attribute_;
    id *value_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 withJavaTextAttributedCharacterIterator_Attribute:(id)arg2 withId:(id)arg3 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif