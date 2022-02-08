// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONDACIUKMIHOVAUTOMATONBUILDER_STATE_H
#define ORGAPACHELUCENEUTILAUTOMATONDACIUKMIHOVAUTOMATONBUILDER_STATE_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneUtilAutomatonDaciukMihovAutomatonBuilder_State : NSObject {
    IOSIntArray *labels_;
    IOSObjectArray *states_;
    BOOL is_final_;
}




-(id)getStateWithInt:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(BOOL)hasChildren;
-(id)newStateWithInt:(int)arg0 ;
-(id)lastChild;
-(id)lastChildWithInt:(int)arg0 ;
-(void)replaceLastChildWithOrgApacheLuceneUtilAutomatonDaciukMihovAutomatonBuilder_State:(id)arg0 ;
-(id)init;
-(void)dealloc;
+(void)initialize;


@end


#endif