// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONCOMPILEDAUTOMATON_H
#define ORGAPACHELUCENEUTILAUTOMATONCOMPILEDAUTOMATON_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAutomatonCompiledAutomaton_AUTOMATON_TYPEEnum.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneUtilAutomatonByteRunAutomaton.h"
#import "OrgApacheLuceneUtilAutomatonAutomaton.h"
#import "JavaLangBoolean.h"
#import "OrgApacheLuceneUtilAutomatonTransition.h"

@interface OrgApacheLuceneUtilAutomatonCompiledAutomaton : NSObject {
    OrgApacheLuceneUtilAutomatonCompiledAutomaton_AUTOMATON_TYPEEnum *type_;
    OrgApacheLuceneUtilBytesRef *term_;
    OrgApacheLuceneUtilAutomatonByteRunAutomaton *runAutomaton_;
    OrgApacheLuceneUtilAutomatonAutomaton *automaton_;
    OrgApacheLuceneUtilBytesRef *commonSuffixRef_;
    JavaLangBoolean *finite_;
    int sinkState_;
    OrgApacheLuceneUtilAutomatonTransition *transition_;
}




-(id)initWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 ;
-(id)initWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withJavaLangBoolean:(id)arg1 withBoolean:(BOOL)arg2 ;
-(id)initWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withJavaLangBoolean:(id)arg1 withBoolean:(BOOL)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(id)addTailWithInt:(int)arg0 withOrgApacheLuceneUtilBytesRefBuilder:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)getTermsEnumWithOrgApacheLuceneIndexTerms:(id)arg0 ;
-(id)floorWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneUtilBytesRefBuilder:(id)arg1 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif