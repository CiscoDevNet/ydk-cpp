#ifndef _MPLS_LDP_GENERIC_STD_MIB_
#define _MPLS_LDP_GENERIC_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace MPLS_LDP_GENERIC_STD_MIB {

class MPLSLDPGENERICSTDMIB : public ydk::Entity
{
    public:
        MPLSLDPGENERICSTDMIB();
        ~MPLSLDPGENERICSTDMIB();

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

        class MplsLdpEntityGenericLRTable; //type: MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable

        std::shared_ptr<cisco_ios_xe::MPLS_LDP_GENERIC_STD_MIB::MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable> mplsldpentitygenericlrtable;
        
}; // MPLSLDPGENERICSTDMIB


class MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable : public ydk::Entity
{
    public:
        MplsLdpEntityGenericLRTable();
        ~MplsLdpEntityGenericLRTable();

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

        class MplsLdpEntityGenericLREntry; //type: MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry

        ydk::YList mplsldpentitygenericlrentry;
        
}; // MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable


class MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry : public ydk::Entity
{
    public:
        MplsLdpEntityGenericLREntry();
        ~MplsLdpEntityGenericLREntry();

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

        //type: string (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityldpid)
        ydk::YLeaf mplsldpentityldpid;
        //type: uint32 (refers to cisco_ios_xe::MPLS_LDP_STD_MIB::MPLSLDPSTDMIB::MplsLdpEntityTable::MplsLdpEntityEntry::mplsldpentityindex)
        ydk::YLeaf mplsldpentityindex;
        ydk::YLeaf mplsldpentitygenericlrmin; //type: uint32
        ydk::YLeaf mplsldpentitygenericlrmax; //type: uint32
        ydk::YLeaf mplsldpentitygenericlabelspace; //type: MplsLdpEntityGenericLabelSpace
        ydk::YLeaf mplsldpentitygenericifindexorzero; //type: int32
        ydk::YLeaf mplsldpentitygenericlrstoragetype; //type: StorageType
        ydk::YLeaf mplsldpentitygenericlrrowstatus; //type: RowStatus
        class MplsLdpEntityGenericLabelSpace;

}; // MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry

class MPLSLDPGENERICSTDMIB::MplsLdpEntityGenericLRTable::MplsLdpEntityGenericLREntry::MplsLdpEntityGenericLabelSpace : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf perPlatform;
        static const ydk::Enum::YLeaf perInterface;

};


}
}

#endif /* _MPLS_LDP_GENERIC_STD_MIB_ */

