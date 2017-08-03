#ifndef _CISCO_IETF_ATM2_PVCTRAP_MIB_
#define _CISCO_IETF_ATM2_PVCTRAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB {

class CiscoIetfAtm2PvctrapMib : public ydk::Entity
{
    public:
        CiscoIetfAtm2PvctrapMib();
        ~CiscoIetfAtm2PvctrapMib();

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

        class Atmcurrentlyfailingpvcltable; //type: CiscoIetfAtm2PvctrapMib::Atmcurrentlyfailingpvcltable

        std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB::CiscoIetfAtm2PvctrapMib::Atmcurrentlyfailingpvcltable> atmcurrentlyfailingpvcltable;
        
}; // CiscoIetfAtm2PvctrapMib


class CiscoIetfAtm2PvctrapMib::Atmcurrentlyfailingpvcltable : public ydk::Entity
{
    public:
        Atmcurrentlyfailingpvcltable();
        ~Atmcurrentlyfailingpvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Atmcurrentlyfailingpvclentry; //type: CiscoIetfAtm2PvctrapMib::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry

        std::vector<std::shared_ptr<CISCO_IETF_ATM2_PVCTRAP_MIB::CiscoIetfAtm2PvctrapMib::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry> > atmcurrentlyfailingpvclentry;
        
}; // CiscoIetfAtm2PvctrapMib::Atmcurrentlyfailingpvcltable


class CiscoIetfAtm2PvctrapMib::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry : public ydk::Entity
{
    public:
        Atmcurrentlyfailingpvclentry();
        ~Atmcurrentlyfailingpvclentry();

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
        ydk::YLeaf atmcurrentlyfailingpvcltimestamp; //type: uint32
        ydk::YLeaf atmpreviouslyfailedpvcltimestamp; //type: uint32

}; // CiscoIetfAtm2PvctrapMib::Atmcurrentlyfailingpvcltable::Atmcurrentlyfailingpvclentry


}
}

#endif /* _CISCO_IETF_ATM2_PVCTRAP_MIB_ */

