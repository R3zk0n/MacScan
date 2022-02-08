// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILNUMERICUTILS_H
#define ORGAPACHELUCENEUTILNUMERICUTILS_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilNumericUtils : NSObject



-(id)init;
+(void)longToPrefixCodedWithLong:(NSInteger)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilBytesRefBuilder:(id)arg2 ;
+(void)intToPrefixCodedWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilBytesRefBuilder:(id)arg2 ;
+(void)longToPrefixCodedBytesWithLong:(NSInteger)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilBytesRefBuilder:(id)arg2 ;
+(void)intToPrefixCodedBytesWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilBytesRefBuilder:(id)arg2 ;
+(int)getPrefixCodedLongShiftWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
+(int)getPrefixCodedIntShiftWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
+(NSInteger)prefixCodedToLongWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
+(int)prefixCodedToIntWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
+(NSInteger)doubleToSortableLongWithDouble:(CGFloat)arg0 ;
+(CGFloat)sortableLongToDoubleWithLong:(NSInteger)arg0 ;
+(int)floatToSortableIntWithFloat:(float)arg0 ;
+(float)sortableIntToFloatWithInt:(int)arg0 ;
+(NSInteger)sortableDoubleBitsWithLong:(NSInteger)arg0 ;
+(int)sortableFloatBitsWithInt:(int)arg0 ;
+(void)splitLongRangeWithOrgApacheLuceneUtilNumericUtils_LongRangeBuilder:(id)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 ;
+(void)splitIntRangeWithOrgApacheLuceneUtilNumericUtils_IntRangeBuilder:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(id)filterPrefixCodedLongsWithOrgApacheLuceneIndexTermsEnum:(id)arg0 ;
+(id)filterPrefixCodedIntsWithOrgApacheLuceneIndexTermsEnum:(id)arg0 ;
+(id)getMinIntWithOrgApacheLuceneIndexTerms:(id)arg0 ;
+(id)getMaxIntWithOrgApacheLuceneIndexTerms:(id)arg0 ;
+(id)getMinLongWithOrgApacheLuceneIndexTerms:(id)arg0 ;
+(id)getMaxLongWithOrgApacheLuceneIndexTerms:(id)arg0 ;


@end


#endif