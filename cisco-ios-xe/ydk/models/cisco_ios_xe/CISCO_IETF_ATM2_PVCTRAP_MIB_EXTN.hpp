#ifndef _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_
#define _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN {

class CiscoIetfAtm2PvctrapMibExtn : public Entity
{
    public:
        CiscoIetfAtm2PvctrapMibExtn();
        ~CiscoIetfAtm2PvctrapMibExtn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Atmcurrentstatuschangepvcltable; //type: CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable
        class Atmstatuschangepvclrangetable; //type: CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable

        std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable> atmcurrentstatuschangepvcltable_;
        std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable> atmstatuschangepvclrangetable_;
        
}; // CiscoIetfAtm2PvctrapMibExtn


class CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable : public Entity
{
    public:
        Atmcurrentstatuschangepvcltable();
        ~Atmcurrentstatuschangepvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atmcurrentstatuschangepvclentry; //type: CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry

        std::vector<std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry> > atmcurrentstatuschangepvclentry_;
        
}; // CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable


class CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry : public Entity
{
    public:
        Atmcurrentstatuschangepvclentry();
        ~Atmcurrentstatuschangepvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        YLeaf atmvclvci;
        YLeaf atmpvclstatustransition; //type: uint32
        YLeaf atmpvclstatuschangestart; //type: uint32
        YLeaf atmpvclstatuschangeend; //type: uint32

}; // CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry


class CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable : public Entity
{
    public:
        Atmstatuschangepvclrangetable();
        ~Atmstatuschangepvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atmstatuschangepvclrangeentry; //type: CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry

        std::vector<std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry> > atmstatuschangepvclrangeentry_;
        
}; // CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable


class CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry : public Entity
{
    public:
        Atmstatuschangepvclrangeentry();
        ~Atmstatuschangepvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        YLeaf atmvclvpi;
        YLeaf rangeindex; //type: uint32
        YLeaf atmpvcllowerrangevalue; //type: int32
        YLeaf atmpvclhigherrangevalue; //type: int32
        YLeaf atmpvclrangestatuschangestart; //type: uint32
        YLeaf atmpvclrangestatuschangeend; //type: uint32

}; // CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry


}
}

#endif /* _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_ */

