// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONDACIUKMIHOVAUTOMATONBUILDER_H
#define ORGAPACHELUCENEUTILAUTOMATONDACIUKMIHOVAUTOMATONBUILDER_H


#import <Foundation/Foundation.h>

#import "JavaUtilHashMap.h"
#import "OrgApacheLuceneUtilAutomatonDaciukMihovAutomatonBuilder_State.h"
#import "OrgApacheLuceneUtilCharsRef.h"

@interface OrgApacheLuceneUtilAutomatonDaciukMihovAutomatonBuilder : NSObject {
    JavaUtilHashMap *stateRegistry_;
    OrgApacheLuceneUtilAutomatonDaciukMihovAutomatonBuilder_State *root_;
    OrgApacheLuceneUtilCharsRef *previous_;
}




-(void)addWithOrgApacheLuceneUtilCharsRef:(id)arg0 ;
-(id)complete;
-(BOOL)setPreviousWithOrgApacheLuceneUtilCharsRef:(id)arg0 ;
-(void)replaceOrRegisterWithOrgApacheLuceneUtilAutomatonDaciukMihovAutomatonBuilder_State:(id)arg0 ;
-(void)addSuffixWithOrgApacheLuceneUtilAutomatonDaciukMihovAutomatonBuilder_State:(id)arg0 withJavaLangCharSequence:(id)arg1 withInt:(int)arg2 ;
-(id)init;
-(void)dealloc;
+(id)buildWithJavaUtilCollection:(id)arg0 ;
+(void)initialize;


@end


#endif