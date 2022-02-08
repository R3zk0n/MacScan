// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDCOMPARATOR_DOUBLECOMPARATOR_H
#define ORGAPACHELUCENESEARCHFIELDCOMPARATOR_DOUBLECOMPARATOR_H

@class NumericComparator;


#import "IOSDoubleArray.h"

@interface OrgApacheLuceneSearchFieldComparator_DoubleComparator : NumericComparator {
    IOSDoubleArray *values_;
    CGFloat bottom_;
    CGFloat topValue_;
}




-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withJavaLangDouble:(id)arg2 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareBottomWithInt:(int)arg0 ;
-(void)copy__WithInt:(int)arg0 withInt:(int)arg1 ;
-(void)setBottomWithInt:(int)arg0 ;
-(void)setTopValueWithId:(id)arg0 ;
-(id)valueWithInt:(int)arg0 ;
-(int)compareTopWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif