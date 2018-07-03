#ifndef _CISCO_AAA_SESSION_MIB_
#define _CISCO_AAA_SESSION_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_AAA_SESSION_MIB {

class CISCOAAASESSIONMIB : public ydk::Entity
{
    public:
        CISCOAAASESSIONMIB();
        ~CISCOAAASESSIONMIB();

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

        class CasnActive; //type: CISCOAAASESSIONMIB::CasnActive
        class CasnGeneral; //type: CISCOAAASESSIONMIB::CasnGeneral
        class CasnActiveTable; //type: CISCOAAASESSIONMIB::CasnActiveTable

        std::shared_ptr<cisco_ios_xe::CISCO_AAA_SESSION_MIB::CISCOAAASESSIONMIB::CasnActive> casnactive;
        std::shared_ptr<cisco_ios_xe::CISCO_AAA_SESSION_MIB::CISCOAAASESSIONMIB::CasnGeneral> casngeneral;
        std::shared_ptr<cisco_ios_xe::CISCO_AAA_SESSION_MIB::CISCOAAASESSIONMIB::CasnActiveTable> casnactivetable;
        
}; // CISCOAAASESSIONMIB


class CISCOAAASESSIONMIB::CasnActive : public ydk::Entity
{
    public:
        CasnActive();
        ~CasnActive();

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

        ydk::YLeaf casnactivetableentries; //type: uint32
        ydk::YLeaf casnactivetablehighwatermark; //type: uint32

}; // CISCOAAASESSIONMIB::CasnActive


class CISCOAAASESSIONMIB::CasnGeneral : public ydk::Entity
{
    public:
        CasnGeneral();
        ~CasnGeneral();

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

        ydk::YLeaf casntotalsessions; //type: uint32
        ydk::YLeaf casndisconnectedsessions; //type: uint32

}; // CISCOAAASESSIONMIB::CasnGeneral


class CISCOAAASESSIONMIB::CasnActiveTable : public ydk::Entity
{
    public:
        CasnActiveTable();
        ~CasnActiveTable();

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

        class CasnActiveEntry; //type: CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry

        ydk::YList casnactiveentry;
        
}; // CISCOAAASESSIONMIB::CasnActiveTable


class CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry : public ydk::Entity
{
    public:
        CasnActiveEntry();
        ~CasnActiveEntry();

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

        ydk::YLeaf casnsessionid; //type: uint32
        ydk::YLeaf casnuserid; //type: string
        ydk::YLeaf casnipaddr; //type: string
        ydk::YLeaf casnidletime; //type: uint32
        ydk::YLeaf casndisconnect; //type: boolean
        ydk::YLeaf casncalltrackerid; //type: uint32
        ydk::YLeaf casnnasport; //type: string
        ydk::YLeaf casnvaiifindex; //type: int32

}; // CISCOAAASESSIONMIB::CasnActiveTable::CasnActiveEntry


}
}

#endif /* _CISCO_AAA_SESSION_MIB_ */

