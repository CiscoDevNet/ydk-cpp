#ifndef _CISCO_IGMP_FILTER_MIB_
#define _CISCO_IGMP_FILTER_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_IGMP_FILTER_MIB {

class CISCOIGMPFILTERMIB : public ydk::Entity
{
    public:
        CISCOIGMPFILTERMIB();
        ~CISCOIGMPFILTERMIB();

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

        class Cigmpfiltergeneral; //type: CISCOIGMPFILTERMIB::Cigmpfiltergeneral
        class Cigmpfiltereditor; //type: CISCOIGMPFILTERMIB::Cigmpfiltereditor
        class Cigmpfiltertable; //type: CISCOIGMPFILTERMIB::Cigmpfiltertable
        class Cigmpfilterinterfacetable; //type: CISCOIGMPFILTERMIB::Cigmpfilterinterfacetable

        std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::Cigmpfiltereditor> cigmpfiltereditor;
        std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::Cigmpfiltergeneral> cigmpfiltergeneral;
        std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::Cigmpfilterinterfacetable> cigmpfilterinterfacetable;
        std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::Cigmpfiltertable> cigmpfiltertable;
        
}; // CISCOIGMPFILTERMIB


class CISCOIGMPFILTERMIB::Cigmpfiltereditor : public ydk::Entity
{
    public:
        Cigmpfiltereditor();
        ~Cigmpfiltereditor();

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

        ydk::YLeaf cigmpfiltereditspinlock; //type: int32
        ydk::YLeaf cigmpfiltereditprofileindex; //type: uint32
        ydk::YLeaf cigmpfiltereditstartaddresstype; //type: InetAddressType
        ydk::YLeaf cigmpfiltereditstartaddress; //type: binary
        ydk::YLeaf cigmpfiltereditendaddresstype; //type: InetAddressType
        ydk::YLeaf cigmpfiltereditendaddress; //type: binary
        ydk::YLeaf cigmpfiltereditprofileaction; //type: Cigmpfiltereditprofileaction
        ydk::YLeaf cigmpfiltereditoperation; //type: Cigmpfiltereditoperation
        ydk::YLeaf cigmpfilterapplystatus; //type: Cigmpfilterapplystatus
        class Cigmpfiltereditprofileaction;
        class Cigmpfiltereditoperation;
        class Cigmpfilterapplystatus;

}; // CISCOIGMPFILTERMIB::Cigmpfiltereditor


class CISCOIGMPFILTERMIB::Cigmpfiltergeneral : public ydk::Entity
{
    public:
        Cigmpfiltergeneral();
        ~Cigmpfiltergeneral();

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

        ydk::YLeaf cigmpfilterenable; //type: boolean
        ydk::YLeaf cigmpfiltermaxprofiles; //type: uint32

}; // CISCOIGMPFILTERMIB::Cigmpfiltergeneral


class CISCOIGMPFILTERMIB::Cigmpfilterinterfacetable : public ydk::Entity
{
    public:
        Cigmpfilterinterfacetable();
        ~Cigmpfilterinterfacetable();

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

        class Cigmpfilterinterfaceentry; //type: CISCOIGMPFILTERMIB::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry> > cigmpfilterinterfaceentry;
        
}; // CISCOIGMPFILTERMIB::Cigmpfilterinterfacetable


class CISCOIGMPFILTERMIB::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry : public ydk::Entity
{
    public:
        Cigmpfilterinterfaceentry();
        ~Cigmpfilterinterfaceentry();

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

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cigmpfilterinterfaceprofileindex; //type: uint32

}; // CISCOIGMPFILTERMIB::Cigmpfilterinterfacetable::Cigmpfilterinterfaceentry


class CISCOIGMPFILTERMIB::Cigmpfiltertable : public ydk::Entity
{
    public:
        Cigmpfiltertable();
        ~Cigmpfiltertable();

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

        class Cigmpfilterentry; //type: CISCOIGMPFILTERMIB::Cigmpfiltertable::Cigmpfilterentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::Cigmpfiltertable::Cigmpfilterentry> > cigmpfilterentry;
        
}; // CISCOIGMPFILTERMIB::Cigmpfiltertable


class CISCOIGMPFILTERMIB::Cigmpfiltertable::Cigmpfilterentry : public ydk::Entity
{
    public:
        Cigmpfilterentry();
        ~Cigmpfilterentry();

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

        ydk::YLeaf cigmpfilterprofileindex; //type: uint32
        ydk::YLeaf cigmpfilterstartaddresstype; //type: InetAddressType
        ydk::YLeaf cigmpfilterstartaddress; //type: binary
        ydk::YLeaf cigmpfilterendaddresstype; //type: InetAddressType
        ydk::YLeaf cigmpfilterendaddress; //type: binary
        ydk::YLeaf cigmpfilterprofileaction; //type: Cigmpfilterprofileaction
        class Cigmpfilterprofileaction;

}; // CISCOIGMPFILTERMIB::Cigmpfiltertable::Cigmpfilterentry

class CISCOIGMPFILTERMIB::Cigmpfiltereditor::Cigmpfiltereditprofileaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unSpecified;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};

class CISCOIGMPFILTERMIB::Cigmpfiltereditor::Cigmpfiltereditoperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf modify;

};

class CISCOIGMPFILTERMIB::Cigmpfiltereditor::Cigmpfilterapplystatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf someOtherError;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf inconsistentEdit;
        static const ydk::Enum::YLeaf entryPresentError;
        static const ydk::Enum::YLeaf entryNotPresentError;

};

class CISCOIGMPFILTERMIB::Cigmpfiltertable::Cigmpfilterentry::Cigmpfilterprofileaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};


}
}

#endif /* _CISCO_IGMP_FILTER_MIB_ */

