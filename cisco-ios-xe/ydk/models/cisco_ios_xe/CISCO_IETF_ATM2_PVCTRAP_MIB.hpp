#ifndef _CISCO_IETF_ATM2_PVCTRAP_MIB_
#define _CISCO_IETF_ATM2_PVCTRAP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IETF_ATM2_PVCTRAP_MIB {

class CISCOIETFATM2PVCTRAPMIB : public ydk::Entity
{
    public:
        CISCOIETFATM2PVCTRAPMIB();
        ~CISCOIETFATM2PVCTRAPMIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

        class AtmCurrentlyFailingPVclTable; //type: CISCOIETFATM2PVCTRAPMIB::AtmCurrentlyFailingPVclTable

        std::shared_ptr<cisco_ios_xe::CISCO_IETF_ATM2_PVCTRAP_MIB::CISCOIETFATM2PVCTRAPMIB::AtmCurrentlyFailingPVclTable> atmcurrentlyfailingpvcltable;
        
}; // CISCOIETFATM2PVCTRAPMIB


class CISCOIETFATM2PVCTRAPMIB::AtmCurrentlyFailingPVclTable : public ydk::Entity
{
    public:
        AtmCurrentlyFailingPVclTable();
        ~AtmCurrentlyFailingPVclTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class AtmCurrentlyFailingPVclEntry; //type: CISCOIETFATM2PVCTRAPMIB::AtmCurrentlyFailingPVclTable::AtmCurrentlyFailingPVclEntry

        ydk::YList atmcurrentlyfailingpvclentry;
        
}; // CISCOIETFATM2PVCTRAPMIB::AtmCurrentlyFailingPVclTable


class CISCOIETFATM2PVCTRAPMIB::AtmCurrentlyFailingPVclTable::AtmCurrentlyFailingPVclEntry : public ydk::Entity
{
    public:
        AtmCurrentlyFailingPVclEntry();
        ~AtmCurrentlyFailingPVclEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvpi)
        ydk::YLeaf atmvclvpi;
        //type: int32 (refers to cisco_ios_xe::ATM_MIB::ATMMIB::AtmVclTable::AtmVclEntry::atmvclvci)
        ydk::YLeaf atmvclvci;
        ydk::YLeaf atmcurrentlyfailingpvcltimestamp; //type: uint32
        ydk::YLeaf atmpreviouslyfailedpvcltimestamp; //type: uint32

}; // CISCOIETFATM2PVCTRAPMIB::AtmCurrentlyFailingPVclTable::AtmCurrentlyFailingPVclEntry


}
}

#endif /* _CISCO_IETF_ATM2_PVCTRAP_MIB_ */

