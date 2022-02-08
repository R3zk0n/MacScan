// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTBUILDER_UNCOMPILEDNODE_H
#define ORGAPACHELUCENEUTILFSTBUILDER_UNCOMPILEDNODE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilFstBuilder.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneUtilFstBuilder_Node-Protocol.h"

@interface OrgApacheLuceneUtilFstBuilder_UnCompiledNode : NSObject <OrgApacheLuceneUtilFstBuilder_Node>

 {
    OrgApacheLuceneUtilFstBuilder *owner_;
    int numArcs_;
    IOSObjectArray *arcs_;
    id *output_;
    BOOL isFinal_;
    NSInteger inputCount_;
    int depth_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneUtilFstBuilder:(id)arg0 withInt:(int)arg1 ;
-(BOOL)isCompiled;
-(void)clear;
-(id)getLastOutputWithInt:(int)arg0 ;
-(void)addArcWithInt:(int)arg0 withOrgApacheLuceneUtilFstBuilder_Node:(id)arg1 ;
-(void)replaceLastWithInt:(int)arg0 withOrgApacheLuceneUtilFstBuilder_Node:(id)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3 ;
-(void)deleteLastWithInt:(int)arg0 withOrgApacheLuceneUtilFstBuilder_Node:(id)arg1 ;
-(void)setLastOutputWithInt:(int)arg0 withId:(id)arg1 ;
-(void)prependOutputWithId:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;


@end


#endif