// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTATTRIBUTEDSTRING_ATTRIBUTEDITERATOR_H
#define JAVATEXTATTRIBUTEDSTRING_ATTRIBUTEDITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaTextAttributedString.h"
#import "JavaUtilHashSet.h"
#import "JavaTextAttributedCharacterIterator-Protocol.h"

@interface JavaTextAttributedString_AttributedIterator : NSObject <JavaTextAttributedCharacterIterator>

 {
    int begin_;
    int end_;
    int offset_;
    JavaTextAttributedString *attrString_;
    JavaUtilHashSet *attributesAllowed_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaTextAttributedString:(id)arg0 ;
-(id)initWithJavaTextAttributedString:(id)arg0 withJavaTextAttributedCharacterIterator_AttributeArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)clone;
-(unsigned short)current;
-(unsigned short)first;
-(int)getBeginIndex;
-(int)getEndIndex;
-(int)getIndex;
-(BOOL)inRangeWithJavaTextAttributedString_Range:(id)arg0 ;
-(BOOL)inRangeWithJavaUtilList:(id)arg0 ;
-(id)getAllAttributeKeys;
-(id)currentValueWithJavaUtilList:(id)arg0 ;
-(id)getAttributeWithJavaTextAttributedCharacterIterator_Attribute:(id)arg0 ;
-(id)getAttributes;
-(int)getRunLimit;
-(int)runLimitWithJavaUtilList:(id)arg0 ;
-(int)getRunLimitWithJavaTextAttributedCharacterIterator_Attribute:(id)arg0 ;
-(int)getRunLimitWithJavaUtilSet:(id)arg0 ;
-(int)getRunStart;
-(int)runStartWithJavaUtilList:(id)arg0 ;
-(int)getRunStartWithJavaTextAttributedCharacterIterator_Attribute:(id)arg0 ;
-(int)getRunStartWithJavaUtilSet:(id)arg0 ;
-(unsigned short)last;
-(unsigned short)next;
-(unsigned short)previous;
-(unsigned short)setIndexWithInt:(int)arg0 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif