#ifndef _CISCO_MPLS_LSR_EXT_STD_MIB_
#define _CISCO_MPLS_LSR_EXT_STD_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_MPLS_LSR_EXT_STD_MIB {

class CISCOMPLSLSREXTSTDMIB : public ydk::Entity
{
    public:
        CISCOMPLSLSREXTSTDMIB();
        ~CISCOMPLSLSREXTSTDMIB();

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

        class CmplsXCExtTable; //type: CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable

        std::shared_ptr<cisco_ios_xe::CISCO_MPLS_LSR_EXT_STD_MIB::CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable> cmplsxcexttable;
        
}; // CISCOMPLSLSREXTSTDMIB


class CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable : public ydk::Entity
{
    public:
        CmplsXCExtTable();
        ~CmplsXCExtTable();

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

        class CmplsXCExtEntry; //type: CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry

        ydk::YList cmplsxcextentry;
        
}; // CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable


class CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry : public ydk::Entity
{
    public:
        CmplsXCExtEntry();
        ~CmplsXCExtEntry();

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

        //type: binary (refers to cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::mplsxcindex)
        ydk::YLeaf mplsxcindex;
        //type: binary (refers to cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::mplsxcinsegmentindex)
        ydk::YLeaf mplsxcinsegmentindex;
        //type: binary (refers to cisco_ios_xe::MPLS_LSR_STD_MIB::MPLSLSRSTDMIB::MplsXCTable::MplsXCEntry::mplsxcoutsegmentindex)
        ydk::YLeaf mplsxcoutsegmentindex;
        ydk::YLeaf cmplsxcexttunnelpointer; //type: string
        ydk::YLeaf cmplsxcoppositedirxcptr; //type: string

}; // CISCOMPLSLSREXTSTDMIB::CmplsXCExtTable::CmplsXCExtEntry


}
}

#endif /* _CISCO_MPLS_LSR_EXT_STD_MIB_ */

