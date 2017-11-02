
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_diffserv_action.hpp"

using namespace ydk;

namespace ietf {
namespace ietf_diffserv_action {

Marking::Marking()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:marking")
{

}

Marking::~Marking()
{
}

Meter::Meter()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:meter")
{

}

Meter::~Meter()
{
}

Priority::Priority()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:priority")
{

}

Priority::~Priority()
{
}

MinRate::MinRate()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:min-rate")
{

}

MinRate::~MinRate()
{
}

MaxRate::MaxRate()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:max-rate")
{

}

MaxRate::~MaxRate()
{
}

AlgorithmicDrop::AlgorithmicDrop()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:algorithmic-drop")
{

}

AlgorithmicDrop::~AlgorithmicDrop()
{
}

DropType::DropType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:drop-type")
{

}

DropType::~DropType()
{
}

MeterActionType::MeterActionType()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:meter-action-type")
{

}

MeterActionType::~MeterActionType()
{
}

AlwaysDrop::AlwaysDrop()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:always-drop")
{

}

AlwaysDrop::~AlwaysDrop()
{
}

TailDrop::TailDrop()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:tail-drop")
{

}

TailDrop::~TailDrop()
{
}

RandomDetect::RandomDetect()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:random-detect")
{

}

RandomDetect::~RandomDetect()
{
}

MeterActionDrop::MeterActionDrop()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:meter-action-drop")
{

}

MeterActionDrop::~MeterActionDrop()
{
}

MeterActionSet::MeterActionSet()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-action", "ietf-diffserv-action", "ietf-diffserv-action:meter-action-set")
{

}

MeterActionSet::~MeterActionSet()
{
}


}
}

