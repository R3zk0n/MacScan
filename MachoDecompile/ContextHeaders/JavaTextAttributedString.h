// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTATTRIBUTEDSTRING_H
#define JAVATEXTATTRIBUTEDSTRING_H


#import <Foundation/Foundation.h>

#import "JavaUtilMap-Protocol.h"

@interface JavaTextAttributedString : NSObject {
    NSString *text_;
    id<JavaUtilMap> *attributeMap_;
}




-(id)initWithJavaTextAttributedCharacterIterator:(id)arg0 ;
-(id)initWithJavaTextAttributedCharacterIterator:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaUtilSet:(id)arg3 ;
-(id)initWithJavaTextAttributedCharacterIterator:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithJavaTextAttributedCharacterIterator:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaTextAttributedCharacterIterator_AttributeArray:(id)arg3 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaUtilMap:(id)arg1 ;
-(void)addAttributeWithJavaTextAttributedCharacterIterator_Attribute:(id)arg0 withId:(id)arg1 ;
-(void)addAttributeWithJavaTextAttributedCharacterIterator_Attribute:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)addAttributesWithJavaUtilMap:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)getIterator;
-(id)getIteratorWithJavaTextAttributedCharacterIterator_AttributeArray:(id)arg0 ;
-(id)getIteratorWithJavaTextAttributedCharacterIterator_AttributeArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif