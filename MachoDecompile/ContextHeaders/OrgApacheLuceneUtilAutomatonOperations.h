// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONOPERATIONS_H
#define ORGAPACHELUCENEUTILAUTOMATONOPERATIONS_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilAutomatonOperations : NSObject



-(id)init;
+(id)concatenateWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withOrgApacheLuceneUtilAutomatonAutomaton:(id)arg1 ;
+(id)concatenateWithJavaUtilList:(id)arg0 ;
+(id)optionalWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(id)repeatWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(id)repeatWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 ;
+(id)repeatWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)complementWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 ;
+(id)minusWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withOrgApacheLuceneUtilAutomatonAutomaton:(id)arg1 withInt:(int)arg2 ;
+(id)intersectionWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withOrgApacheLuceneUtilAutomatonAutomaton:(id)arg1 ;
+(BOOL)sameLanguageWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withOrgApacheLuceneUtilAutomatonAutomaton:(id)arg1 ;
+(BOOL)hasDeadStatesWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(BOOL)hasDeadStatesFromInitialWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(BOOL)hasDeadStatesToAcceptWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(BOOL)subsetOfWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withOrgApacheLuceneUtilAutomatonAutomaton:(id)arg1 ;
+(id)union__WithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withOrgApacheLuceneUtilAutomatonAutomaton:(id)arg1 ;
+(id)union__WithJavaUtilCollection:(id)arg0 ;
+(id)determinizeWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 ;
+(BOOL)isEmptyWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(BOOL)isTotalWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(BOOL)isTotalWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(BOOL)runWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withNSString:(id)arg1 ;
+(BOOL)runWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withOrgApacheLuceneUtilIntsRef:(id)arg1 ;
+(id)removeDeadStatesWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(int)findIndexWithInt:(int)arg0 withIntArray:(id)arg1 ;
+(BOOL)isFiniteWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(id)getCommonPrefixWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(id)getCommonPrefixBytesRefWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(id)getSingletonWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(id)getCommonSuffixBytesRefWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 ;
+(id)reverseWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(id)reverseWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withJavaUtilSet:(id)arg1 ;
+(id)totalizeWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
+(id)topoSortStatesWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;


@end


#endif