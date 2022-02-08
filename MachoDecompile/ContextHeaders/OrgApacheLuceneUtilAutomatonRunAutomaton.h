// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONRUNAUTOMATON_H
#define ORGAPACHELUCENEUTILAUTOMATONRUNAUTOMATON_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAutomatonAutomaton.h"
#import "IOSBooleanArray.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneUtilAutomatonRunAutomaton : NSObject {
    OrgApacheLuceneUtilAutomatonAutomaton *automaton_;
    int maxInterval_;
    int size_;
    IOSBooleanArray *accept_;
    int initial_;
    IOSIntArray *transitions_;
    IOSIntArray *points_;
    IOSIntArray *classmap_;
}




-(id)description;
-(int)getSize;
-(BOOL)isAcceptWithInt:(int)arg0 ;
-(int)getInitialState;
-(id)getCharIntervals;
-(int)getCharClassWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(id)initWithOrgApacheLuceneUtilAutomatonAutomaton:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withInt:(int)arg3 ;
-(int)stepWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;


@end


#endif