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

        class CIgmpFilterGeneral; //type: CISCOIGMPFILTERMIB::CIgmpFilterGeneral
        class CIgmpFilterEditor; //type: CISCOIGMPFILTERMIB::CIgmpFilterEditor
        class CIgmpFilterTable; //type: CISCOIGMPFILTERMIB::CIgmpFilterTable
        class CIgmpFilterInterfaceTable; //type: CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable

        std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::CIgmpFilterGeneral> cigmpfiltergeneral;
        std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::CIgmpFilterEditor> cigmpfiltereditor;
        std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::CIgmpFilterTable> cigmpfiltertable;
        std::shared_ptr<cisco_ios_xe::CISCO_IGMP_FILTER_MIB::CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable> cigmpfilterinterfacetable;
        
}; // CISCOIGMPFILTERMIB


class CISCOIGMPFILTERMIB::CIgmpFilterGeneral : public ydk::Entity
{
    public:
        CIgmpFilterGeneral();
        ~CIgmpFilterGeneral();

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

}; // CISCOIGMPFILTERMIB::CIgmpFilterGeneral


class CISCOIGMPFILTERMIB::CIgmpFilterEditor : public ydk::Entity
{
    public:
        CIgmpFilterEditor();
        ~CIgmpFilterEditor();

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
        ydk::YLeaf cigmpfiltereditprofileaction; //type: CIgmpFilterEditProfileAction
        ydk::YLeaf cigmpfiltereditoperation; //type: CIgmpFilterEditOperation
        ydk::YLeaf cigmpfilterapplystatus; //type: CIgmpFilterApplyStatus
        class CIgmpFilterEditProfileAction;
        class CIgmpFilterEditOperation;
        class CIgmpFilterApplyStatus;

}; // CISCOIGMPFILTERMIB::CIgmpFilterEditor


class CISCOIGMPFILTERMIB::CIgmpFilterTable : public ydk::Entity
{
    public:
        CIgmpFilterTable();
        ~CIgmpFilterTable();

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

        class CIgmpFilterEntry; //type: CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry

        ydk::YList cigmpfilterentry;
        
}; // CISCOIGMPFILTERMIB::CIgmpFilterTable


class CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry : public ydk::Entity
{
    public:
        CIgmpFilterEntry();
        ~CIgmpFilterEntry();

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
        ydk::YLeaf cigmpfilterprofileaction; //type: CIgmpFilterProfileAction
        class CIgmpFilterProfileAction;

}; // CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry


class CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable : public ydk::Entity
{
    public:
        CIgmpFilterInterfaceTable();
        ~CIgmpFilterInterfaceTable();

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

        class CIgmpFilterInterfaceEntry; //type: CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry

        ydk::YList cigmpfilterinterfaceentry;
        
}; // CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable


class CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry : public ydk::Entity
{
    public:
        CIgmpFilterInterfaceEntry();
        ~CIgmpFilterInterfaceEntry();

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
        ydk::YLeaf cigmpfilterinterfaceprofileindex; //type: uint32

}; // CISCOIGMPFILTERMIB::CIgmpFilterInterfaceTable::CIgmpFilterInterfaceEntry

class CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditProfileAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unSpecified;
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};

class CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterEditOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf add;
        static const ydk::Enum::YLeaf delete_;
        static const ydk::Enum::YLeaf modify;

};

class CISCOIGMPFILTERMIB::CIgmpFilterEditor::CIgmpFilterApplyStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf someOtherError;
        static const ydk::Enum::YLeaf succeeded;
        static const ydk::Enum::YLeaf inconsistentEdit;
        static const ydk::Enum::YLeaf entryPresentError;
        static const ydk::Enum::YLeaf entryNotPresentError;

};

class CISCOIGMPFILTERMIB::CIgmpFilterTable::CIgmpFilterEntry::CIgmpFilterProfileAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf permit;
        static const ydk::Enum::YLeaf deny;

};


}
}

#endif /* _CISCO_IGMP_FILTER_MIB_ */

