#ifndef _CISCO_VOICE_DNIS_MIB_
#define _CISCO_VOICE_DNIS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_VOICE_DNIS_MIB {

class CISCOVOICEDNISMIB : public ydk::Entity
{
    public:
        CISCOVOICEDNISMIB();
        ~CISCOVOICEDNISMIB();

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

        class CvDnisMappingTable; //type: CISCOVOICEDNISMIB::CvDnisMappingTable
        class CvDnisNodeTable; //type: CISCOVOICEDNISMIB::CvDnisNodeTable

        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DNIS_MIB::CISCOVOICEDNISMIB::CvDnisMappingTable> cvdnismappingtable;
        std::shared_ptr<cisco_ios_xe::CISCO_VOICE_DNIS_MIB::CISCOVOICEDNISMIB::CvDnisNodeTable> cvdnisnodetable;
        
}; // CISCOVOICEDNISMIB


class CISCOVOICEDNISMIB::CvDnisMappingTable : public ydk::Entity
{
    public:
        CvDnisMappingTable();
        ~CvDnisMappingTable();

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

        class CvDnisMappingEntry; //type: CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry

        ydk::YList cvdnismappingentry;
        
}; // CISCOVOICEDNISMIB::CvDnisMappingTable


class CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry : public ydk::Entity
{
    public:
        CvDnisMappingEntry();
        ~CvDnisMappingEntry();

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

        ydk::YLeaf cvdnismappingname; //type: string
        ydk::YLeaf cvdnismappingurl; //type: string
        ydk::YLeaf cvdnismappingrefresh; //type: CvDnisMappingRefresh
        ydk::YLeaf cvdnismappingurlaccesserror; //type: string
        ydk::YLeaf cvdnismappingstatus; //type: RowStatus
        class CvDnisMappingRefresh;

}; // CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry


class CISCOVOICEDNISMIB::CvDnisNodeTable : public ydk::Entity
{
    public:
        CvDnisNodeTable();
        ~CvDnisNodeTable();

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

        class CvDnisNodeEntry; //type: CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry

        ydk::YList cvdnisnodeentry;
        
}; // CISCOVOICEDNISMIB::CvDnisNodeTable


class CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry : public ydk::Entity
{
    public:
        CvDnisNodeEntry();
        ~CvDnisNodeEntry();

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

        //type: string (refers to cisco_ios_xe::CISCO_VOICE_DNIS_MIB::CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::cvdnismappingname)
        ydk::YLeaf cvdnismappingname;
        ydk::YLeaf cvdnisnumber; //type: string
        ydk::YLeaf cvdnisnodeurl; //type: string
        ydk::YLeaf cvdnisnodemodifiable; //type: boolean
        ydk::YLeaf cvdnisnodestatus; //type: RowStatus

}; // CISCOVOICEDNISMIB::CvDnisNodeTable::CvDnisNodeEntry

class CISCOVOICEDNISMIB::CvDnisMappingTable::CvDnisMappingEntry::CvDnisMappingRefresh : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf refresh;

};


}
}

#endif /* _CISCO_VOICE_DNIS_MIB_ */

