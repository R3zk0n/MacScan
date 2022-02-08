// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILFSTBUILDER_COMPILEDNODE_H
#define ORGAPACHELUCENEUTILFSTBUILDER_COMPILEDNODE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilFstBuilder_Node-Protocol.h"

@interface OrgApacheLuceneUtilFstBuilder_CompiledNode : NSObject <OrgApacheLuceneUtilFstBuilder_Node>

 {
    NSInteger node_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)isCompiled;
-(id)init;


@end


#endif