
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CLAB_DEF_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CLAB_DEF_MIB {

CLABDEFMIB::CLABDEFMIB()
    :
    clabseccertobject(std::make_shared<CLABDEFMIB::ClabSecCertObject>())
{
    clabseccertobject->parent = this;

    yang_name = "CLAB-DEF-MIB"; yang_parent_name = "CLAB-DEF-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CLABDEFMIB::~CLABDEFMIB()
{
}

bool CLABDEFMIB::has_data() const
{
    if (is_presence_container) return true;
    return (clabseccertobject !=  nullptr && clabseccertobject->has_data());
}

bool CLABDEFMIB::has_operation() const
{
    return is_set(yfilter)
	|| (clabseccertobject !=  nullptr && clabseccertobject->has_operation());
}

std::string CLABDEFMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CLAB-DEF-MIB:CLAB-DEF-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CLABDEFMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CLABDEFMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clabSecCertObject")
    {
        if(clabseccertobject == nullptr)
        {
            clabseccertobject = std::make_shared<CLABDEFMIB::ClabSecCertObject>();
        }
        return clabseccertobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CLABDEFMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clabseccertobject != nullptr)
    {
        _children["clabSecCertObject"] = clabseccertobject;
    }

    return _children;
}

void CLABDEFMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CLABDEFMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CLABDEFMIB::clone_ptr() const
{
    return std::make_shared<CLABDEFMIB>();
}

std::string CLABDEFMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CLABDEFMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CLABDEFMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CLABDEFMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CLABDEFMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clabSecCertObject")
        return true;
    return false;
}

CLABDEFMIB::ClabSecCertObject::ClabSecCertObject()
    :
    clabsrvcprvdrrootcacert{YType::str, "clabSrvcPrvdrRootCACert"},
    clabcvcrootcacert{YType::str, "clabCVCRootCACert"},
    clabcvccacert{YType::str, "clabCVCCACert"},
    clabmfgcvccert{YType::str, "clabMfgCVCCert"},
    clabmfgcacert{YType::str, "clabMfgCACert"}
{

    yang_name = "clabSecCertObject"; yang_parent_name = "CLAB-DEF-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CLABDEFMIB::ClabSecCertObject::~ClabSecCertObject()
{
}

bool CLABDEFMIB::ClabSecCertObject::has_data() const
{
    if (is_presence_container) return true;
    return clabsrvcprvdrrootcacert.is_set
	|| clabcvcrootcacert.is_set
	|| clabcvccacert.is_set
	|| clabmfgcvccert.is_set
	|| clabmfgcacert.is_set;
}

bool CLABDEFMIB::ClabSecCertObject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(clabsrvcprvdrrootcacert.yfilter)
	|| ydk::is_set(clabcvcrootcacert.yfilter)
	|| ydk::is_set(clabcvccacert.yfilter)
	|| ydk::is_set(clabmfgcvccert.yfilter)
	|| ydk::is_set(clabmfgcacert.yfilter);
}

std::string CLABDEFMIB::ClabSecCertObject::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CLAB-DEF-MIB:CLAB-DEF-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CLABDEFMIB::ClabSecCertObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clabSecCertObject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CLABDEFMIB::ClabSecCertObject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clabsrvcprvdrrootcacert.is_set || is_set(clabsrvcprvdrrootcacert.yfilter)) leaf_name_data.push_back(clabsrvcprvdrrootcacert.get_name_leafdata());
    if (clabcvcrootcacert.is_set || is_set(clabcvcrootcacert.yfilter)) leaf_name_data.push_back(clabcvcrootcacert.get_name_leafdata());
    if (clabcvccacert.is_set || is_set(clabcvccacert.yfilter)) leaf_name_data.push_back(clabcvccacert.get_name_leafdata());
    if (clabmfgcvccert.is_set || is_set(clabmfgcvccert.yfilter)) leaf_name_data.push_back(clabmfgcvccert.get_name_leafdata());
    if (clabmfgcacert.is_set || is_set(clabmfgcacert.yfilter)) leaf_name_data.push_back(clabmfgcacert.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CLABDEFMIB::ClabSecCertObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CLABDEFMIB::ClabSecCertObject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CLABDEFMIB::ClabSecCertObject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "clabSrvcPrvdrRootCACert")
    {
        clabsrvcprvdrrootcacert = value;
        clabsrvcprvdrrootcacert.value_namespace = name_space;
        clabsrvcprvdrrootcacert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clabCVCRootCACert")
    {
        clabcvcrootcacert = value;
        clabcvcrootcacert.value_namespace = name_space;
        clabcvcrootcacert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clabCVCCACert")
    {
        clabcvccacert = value;
        clabcvccacert.value_namespace = name_space;
        clabcvccacert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clabMfgCVCCert")
    {
        clabmfgcvccert = value;
        clabmfgcvccert.value_namespace = name_space;
        clabmfgcvccert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clabMfgCACert")
    {
        clabmfgcacert = value;
        clabmfgcacert.value_namespace = name_space;
        clabmfgcacert.value_namespace_prefix = name_space_prefix;
    }
}

void CLABDEFMIB::ClabSecCertObject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "clabSrvcPrvdrRootCACert")
    {
        clabsrvcprvdrrootcacert.yfilter = yfilter;
    }
    if(value_path == "clabCVCRootCACert")
    {
        clabcvcrootcacert.yfilter = yfilter;
    }
    if(value_path == "clabCVCCACert")
    {
        clabcvccacert.yfilter = yfilter;
    }
    if(value_path == "clabMfgCVCCert")
    {
        clabmfgcvccert.yfilter = yfilter;
    }
    if(value_path == "clabMfgCACert")
    {
        clabmfgcacert.yfilter = yfilter;
    }
}

bool CLABDEFMIB::ClabSecCertObject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clabSrvcPrvdrRootCACert" || name == "clabCVCRootCACert" || name == "clabCVCCACert" || name == "clabMfgCVCCert" || name == "clabMfgCACert")
        return true;
    return false;
}


}
}

