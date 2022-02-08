// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONTOOCOMPLEXTODETERMINIZEEXCEPTION_H
#define ORGAPACHELUCENEUTILAUTOMATONTOOCOMPLEXTODETERMINIZEEXCEPTION_H

@class OrgApacheLuceneUtilAutomatonRegExp;


#import "JavaLangRuntimeException.h"
#import "OrgApacheLuceneUtilAutomatonAutomaton.h"

@interface OrgApacheLuceneUtilAutomatonTooComplexToDeterminizeException : JavaLangRuntimeException {
    OrgApacheLuceneUtilAutomatonAutomaton *automaton_;
    OrgApacheLuceneUtilAutomatonRegExp *regExp_;
    int maxDeterminizedStates_;
}




-(id)initWithOrgApacheLuceneUtilAutomatonRegExp:(id)arg0 withOrgApacheLuceneUtilAutomatonTooComplexToDeterminizeException:(id)arg1 ;
-(id)initWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 ;
-(id)getAutomaton;
-(id)getRegExp;
-(int)getMaxDeterminizedStates;
-(void)dealloc;


@end


#endif