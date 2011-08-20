#import <Foundation/Foundation.h>

// Local includes
#import "PBXCoder.h"


@interface PBXSourcesBuildPhase : NSObject
{
  NSMutableArray *files;
  NSString *buildActionMask;
  NSString *runOnlyForDeploymentPostprocessing;
}

// Methods....
- (id) initWithPBXCoder: (PBXCoder *)coder;

@end