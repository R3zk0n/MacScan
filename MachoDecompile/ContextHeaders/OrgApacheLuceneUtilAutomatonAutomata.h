// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONAUTOMATA_H
#define ORGAPACHELUCENEUTILAUTOMATONAUTOMATA_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilAutomatonAutomata : NSObject



-(id)init;
+(id)makeEmpty;
+(id)makeEmptyString;
+(id)makeAnyString;
+(id)makeAnyBinary;
+(id)makeAnyChar;
+(int)appendAnyCharWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 ;
+(id)makeCharWithInt:(int)arg0 ;
+(int)appendCharWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)makeCharRangeWithInt:(int)arg0 withInt:(int)arg1 ;
+(id)makeBinaryIntervalWithOrgApacheLuceneUtilBytesRef:(id)arg0 withBoolean:(BOOL)arg1 withOrgApacheLuceneUtilBytesRef:(id)arg2 withBoolean:(BOOL)arg3 ;
+(id)makeDecimalIntervalWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)makeStringWithNSString:(id)arg0 ;
+(id)makeBinaryWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
+(id)makeStringWithIntArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)makeStringUnionWithJavaUtilCollection:(id)arg0 ;


@end


#endif