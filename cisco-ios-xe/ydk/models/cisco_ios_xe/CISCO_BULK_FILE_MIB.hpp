#ifndef _CISCO_BULK_FILE_MIB_
#define _CISCO_BULK_FILE_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_BULK_FILE_MIB {

class CISCOBULKFILEMIB : public ydk::Entity
{
    public:
        CISCOBULKFILEMIB();
        ~CISCOBULKFILEMIB();

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

        class Cbfdefine; //type: CISCOBULKFILEMIB::Cbfdefine
        class Cbfstatus; //type: CISCOBULKFILEMIB::Cbfstatus
        class Cbfdefinefiletable; //type: CISCOBULKFILEMIB::Cbfdefinefiletable
        class Cbfdefineobjecttable; //type: CISCOBULKFILEMIB::Cbfdefineobjecttable
        class Cbfstatusfiletable; //type: CISCOBULKFILEMIB::Cbfstatusfiletable

        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfdefine> cbfdefine;
        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfstatus> cbfstatus;
        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfdefinefiletable> cbfdefinefiletable;
        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfdefineobjecttable> cbfdefineobjecttable;
        std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfstatusfiletable> cbfstatusfiletable;
        
}; // CISCOBULKFILEMIB


class CISCOBULKFILEMIB::Cbfdefine : public ydk::Entity
{
    public:
        Cbfdefine();
        ~Cbfdefine();

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

        ydk::YLeaf cbfdefinemaxfiles; //type: uint32
        ydk::YLeaf cbfdefinefiles; //type: uint32
        ydk::YLeaf cbfdefinehighfiles; //type: uint32
        ydk::YLeaf cbfdefinefilesrefused; //type: uint32
        ydk::YLeaf cbfdefinemaxobjects; //type: uint32
        ydk::YLeaf cbfdefineobjects; //type: uint32
        ydk::YLeaf cbfdefinehighobjects; //type: uint32
        ydk::YLeaf cbfdefineobjectsrefused; //type: uint32

}; // CISCOBULKFILEMIB::Cbfdefine


class CISCOBULKFILEMIB::Cbfstatus : public ydk::Entity
{
    public:
        Cbfstatus();
        ~Cbfstatus();

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

        ydk::YLeaf cbfstatusmaxfiles; //type: uint32
        ydk::YLeaf cbfstatusfiles; //type: uint32
        ydk::YLeaf cbfstatushighfiles; //type: uint32
        ydk::YLeaf cbfstatusfilesbumped; //type: uint32

}; // CISCOBULKFILEMIB::Cbfstatus


class CISCOBULKFILEMIB::Cbfdefinefiletable : public ydk::Entity
{
    public:
        Cbfdefinefiletable();
        ~Cbfdefinefiletable();

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

        class Cbfdefinefileentry; //type: CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry> > cbfdefinefileentry;
        
}; // CISCOBULKFILEMIB::Cbfdefinefiletable


class CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry : public ydk::Entity
{
    public:
        Cbfdefinefileentry();
        ~Cbfdefinefileentry();

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

        ydk::YLeaf cbfdefinefileindex; //type: uint32
        ydk::YLeaf cbfdefinefilename; //type: string
        ydk::YLeaf cbfdefinefilestorage; //type: Cbfdefinefilestorage
        ydk::YLeaf cbfdefinefileformat; //type: Cbfdefinefileformat
        ydk::YLeaf cbfdefinefilenow; //type: Cbfdefinefilenow
        ydk::YLeaf cbfdefinefileentrystatus; //type: RowStatus
        ydk::YLeaf cbfdefinefilenotifyoncompletion; //type: boolean
        class Cbfdefinefilestorage;
        class Cbfdefinefileformat;
        class Cbfdefinefilenow;

}; // CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry


class CISCOBULKFILEMIB::Cbfdefineobjecttable : public ydk::Entity
{
    public:
        Cbfdefineobjecttable();
        ~Cbfdefineobjecttable();

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

        class Cbfdefineobjectentry; //type: CISCOBULKFILEMIB::Cbfdefineobjecttable::Cbfdefineobjectentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfdefineobjecttable::Cbfdefineobjectentry> > cbfdefineobjectentry;
        
}; // CISCOBULKFILEMIB::Cbfdefineobjecttable


class CISCOBULKFILEMIB::Cbfdefineobjecttable::Cbfdefineobjectentry : public ydk::Entity
{
    public:
        Cbfdefineobjectentry();
        ~Cbfdefineobjectentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry::cbfdefinefileindex)
        ydk::YLeaf cbfdefinefileindex;
        ydk::YLeaf cbfdefineobjectindex; //type: uint32
        ydk::YLeaf cbfdefineobjectclass; //type: Cbfdefineobjectclass
        ydk::YLeaf cbfdefineobjectid; //type: string
        ydk::YLeaf cbfdefineobjectentrystatus; //type: RowStatus
        ydk::YLeaf cbfdefineobjecttableinstance; //type: string
        ydk::YLeaf cbfdefineobjectnumentries; //type: uint32
        ydk::YLeaf cbfdefineobjectlastpolledinst; //type: string
        class Cbfdefineobjectclass;

}; // CISCOBULKFILEMIB::Cbfdefineobjecttable::Cbfdefineobjectentry


class CISCOBULKFILEMIB::Cbfstatusfiletable : public ydk::Entity
{
    public:
        Cbfstatusfiletable();
        ~Cbfstatusfiletable();

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

        class Cbfstatusfileentry; //type: CISCOBULKFILEMIB::Cbfstatusfiletable::Cbfstatusfileentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfstatusfiletable::Cbfstatusfileentry> > cbfstatusfileentry;
        
}; // CISCOBULKFILEMIB::Cbfstatusfiletable


class CISCOBULKFILEMIB::Cbfstatusfiletable::Cbfstatusfileentry : public ydk::Entity
{
    public:
        Cbfstatusfileentry();
        ~Cbfstatusfileentry();

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

        //type: uint32 (refers to cisco_ios_xe::CISCO_BULK_FILE_MIB::CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry::cbfdefinefileindex)
        ydk::YLeaf cbfdefinefileindex;
        ydk::YLeaf cbfstatusfileindex; //type: uint32
        ydk::YLeaf cbfstatusfilestate; //type: Cbfstatusfilestate
        ydk::YLeaf cbfstatusfilecompletiontime; //type: uint32
        ydk::YLeaf cbfstatusfileentrystatus; //type: RowStatus
        class Cbfstatusfilestate;

}; // CISCOBULKFILEMIB::Cbfstatusfiletable::Cbfstatusfileentry

class CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilestorage : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ephemeral;
        static const ydk::Enum::YLeaf volatile_;
        static const ydk::Enum::YLeaf permanent;

};

class CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefileformat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standardBER;
        static const ydk::Enum::YLeaf bulkBinary;
        static const ydk::Enum::YLeaf bulkASCII;
        static const ydk::Enum::YLeaf variantBERWithCksum;
        static const ydk::Enum::YLeaf variantBinWithCksum;

};

class CISCOBULKFILEMIB::Cbfdefinefiletable::Cbfdefinefileentry::Cbfdefinefilenow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notActive;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf create;
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf forcedCreate;

};

class CISCOBULKFILEMIB::Cbfdefineobjecttable::Cbfdefineobjectentry::Cbfdefineobjectclass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf object;
        static const ydk::Enum::YLeaf lexicalTable;
        static const ydk::Enum::YLeaf leastCpuTable;

};

class CISCOBULKFILEMIB::Cbfstatusfiletable::Cbfstatusfileentry::Cbfstatusfilestate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf emptied;
        static const ydk::Enum::YLeaf noSpace;
        static const ydk::Enum::YLeaf badName;
        static const ydk::Enum::YLeaf writeErr;
        static const ydk::Enum::YLeaf noMem;
        static const ydk::Enum::YLeaf buffErr;
        static const ydk::Enum::YLeaf aborted;

};


}
}

#endif /* _CISCO_BULK_FILE_MIB_ */

