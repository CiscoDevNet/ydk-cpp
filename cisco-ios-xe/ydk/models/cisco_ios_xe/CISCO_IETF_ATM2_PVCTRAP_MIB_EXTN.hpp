#ifndef _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_
#define _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN {

class CiscoIetfAtm2PvctrapMibExtn : public ydk::Entity
{
    public:
        CiscoIetfAtm2PvctrapMibExtn();
        ~CiscoIetfAtm2PvctrapMibExtn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Atmcurrentstatuschangepvcltable; //type: CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable
        class Atmstatuschangepvclrangetable; //type: CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable

        std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable> atmcurrentstatuschangepvcltable;
        std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable> atmstatuschangepvclrangetable;
        
}; // CiscoIetfAtm2PvctrapMibExtn


class CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable : public ydk::Entity
{
    public:
        Atmcurrentstatuschangepvcltable();
        ~Atmcurrentstatuschangepvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atmcurrentstatuschangepvclentry; //type: CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry

        std::vector<std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry> > atmcurrentstatuschangepvclentry;
        
}; // CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable


class CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry : public ydk::Entity
{
    public:
        Atmcurrentstatuschangepvclentry();
        ~Atmcurrentstatuschangepvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf atmpvclstatustransition; //type: uint32
        ydk::YLeaf atmpvclstatuschangestart; //type: uint32
        ydk::YLeaf atmpvclstatuschangeend; //type: uint32

}; // CiscoIetfAtm2PvctrapMibExtn::Atmcurrentstatuschangepvcltable::Atmcurrentstatuschangepvclentry


class CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable : public ydk::Entity
{
    public:
        Atmstatuschangepvclrangetable();
        ~Atmstatuschangepvclrangetable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atmstatuschangepvclrangeentry; //type: CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry

        std::vector<std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN::CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry> > atmstatuschangepvclrangeentry;
        
}; // CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable


class CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry : public ydk::Entity
{
    public:
        Atmstatuschangepvclrangeentry();
        ~Atmstatuschangepvclrangeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to ATM_MIB::AtmMib::Atmvcltable::Atmvclentry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        ydk::YLeaf rangeindex; //type: uint32
        ydk::YLeaf atmpvcllowerrangevalue; //type: int32
        ydk::YLeaf atmpvclhigherrangevalue; //type: int32
        ydk::YLeaf atmpvclrangestatuschangestart; //type: uint32
        ydk::YLeaf atmpvclrangestatuschangeend; //type: uint32

}; // CiscoIetfAtm2PvctrapMibExtn::Atmstatuschangepvclrangetable::Atmstatuschangepvclrangeentry


}
}

#endif /* _CISCO_IETF_ATM2_PVCTRAP_MIB_EXTN_ */

