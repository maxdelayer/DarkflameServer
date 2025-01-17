#include "RearrangeStripMessage.h"

RearrangeStripMessage::RearrangeStripMessage(AMFArrayValue* arguments) : BehaviorMessageBase(arguments) {
	actionContext = ActionContext(arguments);
	srcActionIndex = GetActionIndexFromArgument(arguments, "srcActionIndex");

	dstActionIndex = GetActionIndexFromArgument(arguments, "dstActionIndex");

	LOG_DEBUG("srcactionIndex %i dstactionIndex %i stripId %i behaviorId %i stateId %i", srcActionIndex, dstActionIndex, actionContext.GetStripId(), behaviorId, actionContext.GetStateId());
}
