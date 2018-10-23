
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DOCS_SUBMGT3_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DOCS_SUBMGT3_MIB {

DOCSSUBMGT3MIB::DOCSSUBMGT3MIB()
    :
    docssubmgt3base(std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3Base>())
    , docssubmgt3cpectrltable(std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable>())
    , docssubmgt3cpeiptable(std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable>())
    , docssubmgt3grptable(std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3GrpTable>())
    , docssubmgt3filtergrptable(std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable>())
{
    docssubmgt3base->parent = this;
    docssubmgt3cpectrltable->parent = this;
    docssubmgt3cpeiptable->parent = this;
    docssubmgt3grptable->parent = this;
    docssubmgt3filtergrptable->parent = this;

    yang_name = "DOCS-SUBMGT3-MIB"; yang_parent_name = "DOCS-SUBMGT3-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::~DOCSSUBMGT3MIB()
{
}

bool DOCSSUBMGT3MIB::has_data() const
{
    if (is_presence_container) return true;
    return (docssubmgt3base !=  nullptr && docssubmgt3base->has_data())
	|| (docssubmgt3cpectrltable !=  nullptr && docssubmgt3cpectrltable->has_data())
	|| (docssubmgt3cpeiptable !=  nullptr && docssubmgt3cpeiptable->has_data())
	|| (docssubmgt3grptable !=  nullptr && docssubmgt3grptable->has_data())
	|| (docssubmgt3filtergrptable !=  nullptr && docssubmgt3filtergrptable->has_data());
}

bool DOCSSUBMGT3MIB::has_operation() const
{
    return is_set(yfilter)
	|| (docssubmgt3base !=  nullptr && docssubmgt3base->has_operation())
	|| (docssubmgt3cpectrltable !=  nullptr && docssubmgt3cpectrltable->has_operation())
	|| (docssubmgt3cpeiptable !=  nullptr && docssubmgt3cpeiptable->has_operation())
	|| (docssubmgt3grptable !=  nullptr && docssubmgt3grptable->has_operation())
	|| (docssubmgt3filtergrptable !=  nullptr && docssubmgt3filtergrptable->has_operation());
}

std::string DOCSSUBMGT3MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsSubmgt3Base")
    {
        if(docssubmgt3base == nullptr)
        {
            docssubmgt3base = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3Base>();
        }
        return docssubmgt3base;
    }

    if(child_yang_name == "docsSubmgt3CpeCtrlTable")
    {
        if(docssubmgt3cpectrltable == nullptr)
        {
            docssubmgt3cpectrltable = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable>();
        }
        return docssubmgt3cpectrltable;
    }

    if(child_yang_name == "docsSubmgt3CpeIpTable")
    {
        if(docssubmgt3cpeiptable == nullptr)
        {
            docssubmgt3cpeiptable = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable>();
        }
        return docssubmgt3cpeiptable;
    }

    if(child_yang_name == "docsSubmgt3GrpTable")
    {
        if(docssubmgt3grptable == nullptr)
        {
            docssubmgt3grptable = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3GrpTable>();
        }
        return docssubmgt3grptable;
    }

    if(child_yang_name == "docsSubmgt3FilterGrpTable")
    {
        if(docssubmgt3filtergrptable == nullptr)
        {
            docssubmgt3filtergrptable = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable>();
        }
        return docssubmgt3filtergrptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(docssubmgt3base != nullptr)
    {
        _children["docsSubmgt3Base"] = docssubmgt3base;
    }

    if(docssubmgt3cpectrltable != nullptr)
    {
        _children["docsSubmgt3CpeCtrlTable"] = docssubmgt3cpectrltable;
    }

    if(docssubmgt3cpeiptable != nullptr)
    {
        _children["docsSubmgt3CpeIpTable"] = docssubmgt3cpeiptable;
    }

    if(docssubmgt3grptable != nullptr)
    {
        _children["docsSubmgt3GrpTable"] = docssubmgt3grptable;
    }

    if(docssubmgt3filtergrptable != nullptr)
    {
        _children["docsSubmgt3FilterGrpTable"] = docssubmgt3filtergrptable;
    }

    return _children;
}

void DOCSSUBMGT3MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSSUBMGT3MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::clone_ptr() const
{
    return std::make_shared<DOCSSUBMGT3MIB>();
}

std::string DOCSSUBMGT3MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DOCSSUBMGT3MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DOCSSUBMGT3MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DOCSSUBMGT3MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DOCSSUBMGT3MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsSubmgt3Base" || name == "docsSubmgt3CpeCtrlTable" || name == "docsSubmgt3CpeIpTable" || name == "docsSubmgt3GrpTable" || name == "docsSubmgt3FilterGrpTable")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3Base::DocsSubmgt3Base()
    :
    docssubmgt3basecpemaxipv4def{YType::uint32, "docsSubmgt3BaseCpeMaxIpv4Def"},
    docssubmgt3basecpemaxipv6prefixdef{YType::uint32, "docsSubmgt3BaseCpeMaxIpv6PrefixDef"},
    docssubmgt3basecpeactivedef{YType::boolean, "docsSubmgt3BaseCpeActiveDef"},
    docssubmgt3basecpelearnabledef{YType::boolean, "docsSubmgt3BaseCpeLearnableDef"},
    docssubmgt3basesubfilterdowndef{YType::uint32, "docsSubmgt3BaseSubFilterDownDef"},
    docssubmgt3basesubfilterupdef{YType::uint32, "docsSubmgt3BaseSubFilterUpDef"},
    docssubmgt3basecmfilterdowndef{YType::uint32, "docsSubmgt3BaseCmFilterDownDef"},
    docssubmgt3basecmfilterupdef{YType::uint32, "docsSubmgt3BaseCmFilterUpDef"},
    docssubmgt3basepsfilterdowndef{YType::uint32, "docsSubmgt3BasePsFilterDownDef"},
    docssubmgt3basepsfilterupdef{YType::uint32, "docsSubmgt3BasePsFilterUpDef"},
    docssubmgt3basemtafilterdowndef{YType::uint32, "docsSubmgt3BaseMtaFilterDownDef"},
    docssubmgt3basemtafilterupdef{YType::uint32, "docsSubmgt3BaseMtaFilterUpDef"},
    docssubmgt3basestbfilterdowndef{YType::uint32, "docsSubmgt3BaseStbFilterDownDef"},
    docssubmgt3basestbfilterupdef{YType::uint32, "docsSubmgt3BaseStbFilterUpDef"}
{

    yang_name = "docsSubmgt3Base"; yang_parent_name = "DOCS-SUBMGT3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3Base::~DocsSubmgt3Base()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3Base::has_data() const
{
    if (is_presence_container) return true;
    return docssubmgt3basecpemaxipv4def.is_set
	|| docssubmgt3basecpemaxipv6prefixdef.is_set
	|| docssubmgt3basecpeactivedef.is_set
	|| docssubmgt3basecpelearnabledef.is_set
	|| docssubmgt3basesubfilterdowndef.is_set
	|| docssubmgt3basesubfilterupdef.is_set
	|| docssubmgt3basecmfilterdowndef.is_set
	|| docssubmgt3basecmfilterupdef.is_set
	|| docssubmgt3basepsfilterdowndef.is_set
	|| docssubmgt3basepsfilterupdef.is_set
	|| docssubmgt3basemtafilterdowndef.is_set
	|| docssubmgt3basemtafilterupdef.is_set
	|| docssubmgt3basestbfilterdowndef.is_set
	|| docssubmgt3basestbfilterupdef.is_set;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3Base::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docssubmgt3basecpemaxipv4def.yfilter)
	|| ydk::is_set(docssubmgt3basecpemaxipv6prefixdef.yfilter)
	|| ydk::is_set(docssubmgt3basecpeactivedef.yfilter)
	|| ydk::is_set(docssubmgt3basecpelearnabledef.yfilter)
	|| ydk::is_set(docssubmgt3basesubfilterdowndef.yfilter)
	|| ydk::is_set(docssubmgt3basesubfilterupdef.yfilter)
	|| ydk::is_set(docssubmgt3basecmfilterdowndef.yfilter)
	|| ydk::is_set(docssubmgt3basecmfilterupdef.yfilter)
	|| ydk::is_set(docssubmgt3basepsfilterdowndef.yfilter)
	|| ydk::is_set(docssubmgt3basepsfilterupdef.yfilter)
	|| ydk::is_set(docssubmgt3basemtafilterdowndef.yfilter)
	|| ydk::is_set(docssubmgt3basemtafilterupdef.yfilter)
	|| ydk::is_set(docssubmgt3basestbfilterdowndef.yfilter)
	|| ydk::is_set(docssubmgt3basestbfilterupdef.yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3Base::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3Base::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3Base";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3Base::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docssubmgt3basecpemaxipv4def.is_set || is_set(docssubmgt3basecpemaxipv4def.yfilter)) leaf_name_data.push_back(docssubmgt3basecpemaxipv4def.get_name_leafdata());
    if (docssubmgt3basecpemaxipv6prefixdef.is_set || is_set(docssubmgt3basecpemaxipv6prefixdef.yfilter)) leaf_name_data.push_back(docssubmgt3basecpemaxipv6prefixdef.get_name_leafdata());
    if (docssubmgt3basecpeactivedef.is_set || is_set(docssubmgt3basecpeactivedef.yfilter)) leaf_name_data.push_back(docssubmgt3basecpeactivedef.get_name_leafdata());
    if (docssubmgt3basecpelearnabledef.is_set || is_set(docssubmgt3basecpelearnabledef.yfilter)) leaf_name_data.push_back(docssubmgt3basecpelearnabledef.get_name_leafdata());
    if (docssubmgt3basesubfilterdowndef.is_set || is_set(docssubmgt3basesubfilterdowndef.yfilter)) leaf_name_data.push_back(docssubmgt3basesubfilterdowndef.get_name_leafdata());
    if (docssubmgt3basesubfilterupdef.is_set || is_set(docssubmgt3basesubfilterupdef.yfilter)) leaf_name_data.push_back(docssubmgt3basesubfilterupdef.get_name_leafdata());
    if (docssubmgt3basecmfilterdowndef.is_set || is_set(docssubmgt3basecmfilterdowndef.yfilter)) leaf_name_data.push_back(docssubmgt3basecmfilterdowndef.get_name_leafdata());
    if (docssubmgt3basecmfilterupdef.is_set || is_set(docssubmgt3basecmfilterupdef.yfilter)) leaf_name_data.push_back(docssubmgt3basecmfilterupdef.get_name_leafdata());
    if (docssubmgt3basepsfilterdowndef.is_set || is_set(docssubmgt3basepsfilterdowndef.yfilter)) leaf_name_data.push_back(docssubmgt3basepsfilterdowndef.get_name_leafdata());
    if (docssubmgt3basepsfilterupdef.is_set || is_set(docssubmgt3basepsfilterupdef.yfilter)) leaf_name_data.push_back(docssubmgt3basepsfilterupdef.get_name_leafdata());
    if (docssubmgt3basemtafilterdowndef.is_set || is_set(docssubmgt3basemtafilterdowndef.yfilter)) leaf_name_data.push_back(docssubmgt3basemtafilterdowndef.get_name_leafdata());
    if (docssubmgt3basemtafilterupdef.is_set || is_set(docssubmgt3basemtafilterupdef.yfilter)) leaf_name_data.push_back(docssubmgt3basemtafilterupdef.get_name_leafdata());
    if (docssubmgt3basestbfilterdowndef.is_set || is_set(docssubmgt3basestbfilterdowndef.yfilter)) leaf_name_data.push_back(docssubmgt3basestbfilterdowndef.get_name_leafdata());
    if (docssubmgt3basestbfilterupdef.is_set || is_set(docssubmgt3basestbfilterupdef.yfilter)) leaf_name_data.push_back(docssubmgt3basestbfilterupdef.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3Base::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3Base::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3Base::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsSubmgt3BaseCpeMaxIpv4Def")
    {
        docssubmgt3basecpemaxipv4def = value;
        docssubmgt3basecpemaxipv4def.value_namespace = name_space;
        docssubmgt3basecpemaxipv4def.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseCpeMaxIpv6PrefixDef")
    {
        docssubmgt3basecpemaxipv6prefixdef = value;
        docssubmgt3basecpemaxipv6prefixdef.value_namespace = name_space;
        docssubmgt3basecpemaxipv6prefixdef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseCpeActiveDef")
    {
        docssubmgt3basecpeactivedef = value;
        docssubmgt3basecpeactivedef.value_namespace = name_space;
        docssubmgt3basecpeactivedef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseCpeLearnableDef")
    {
        docssubmgt3basecpelearnabledef = value;
        docssubmgt3basecpelearnabledef.value_namespace = name_space;
        docssubmgt3basecpelearnabledef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseSubFilterDownDef")
    {
        docssubmgt3basesubfilterdowndef = value;
        docssubmgt3basesubfilterdowndef.value_namespace = name_space;
        docssubmgt3basesubfilterdowndef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseSubFilterUpDef")
    {
        docssubmgt3basesubfilterupdef = value;
        docssubmgt3basesubfilterupdef.value_namespace = name_space;
        docssubmgt3basesubfilterupdef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseCmFilterDownDef")
    {
        docssubmgt3basecmfilterdowndef = value;
        docssubmgt3basecmfilterdowndef.value_namespace = name_space;
        docssubmgt3basecmfilterdowndef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseCmFilterUpDef")
    {
        docssubmgt3basecmfilterupdef = value;
        docssubmgt3basecmfilterupdef.value_namespace = name_space;
        docssubmgt3basecmfilterupdef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BasePsFilterDownDef")
    {
        docssubmgt3basepsfilterdowndef = value;
        docssubmgt3basepsfilterdowndef.value_namespace = name_space;
        docssubmgt3basepsfilterdowndef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BasePsFilterUpDef")
    {
        docssubmgt3basepsfilterupdef = value;
        docssubmgt3basepsfilterupdef.value_namespace = name_space;
        docssubmgt3basepsfilterupdef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseMtaFilterDownDef")
    {
        docssubmgt3basemtafilterdowndef = value;
        docssubmgt3basemtafilterdowndef.value_namespace = name_space;
        docssubmgt3basemtafilterdowndef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseMtaFilterUpDef")
    {
        docssubmgt3basemtafilterupdef = value;
        docssubmgt3basemtafilterupdef.value_namespace = name_space;
        docssubmgt3basemtafilterupdef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseStbFilterDownDef")
    {
        docssubmgt3basestbfilterdowndef = value;
        docssubmgt3basestbfilterdowndef.value_namespace = name_space;
        docssubmgt3basestbfilterdowndef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3BaseStbFilterUpDef")
    {
        docssubmgt3basestbfilterupdef = value;
        docssubmgt3basestbfilterupdef.value_namespace = name_space;
        docssubmgt3basestbfilterupdef.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSSUBMGT3MIB::DocsSubmgt3Base::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsSubmgt3BaseCpeMaxIpv4Def")
    {
        docssubmgt3basecpemaxipv4def.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseCpeMaxIpv6PrefixDef")
    {
        docssubmgt3basecpemaxipv6prefixdef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseCpeActiveDef")
    {
        docssubmgt3basecpeactivedef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseCpeLearnableDef")
    {
        docssubmgt3basecpelearnabledef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseSubFilterDownDef")
    {
        docssubmgt3basesubfilterdowndef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseSubFilterUpDef")
    {
        docssubmgt3basesubfilterupdef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseCmFilterDownDef")
    {
        docssubmgt3basecmfilterdowndef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseCmFilterUpDef")
    {
        docssubmgt3basecmfilterupdef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BasePsFilterDownDef")
    {
        docssubmgt3basepsfilterdowndef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BasePsFilterUpDef")
    {
        docssubmgt3basepsfilterupdef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseMtaFilterDownDef")
    {
        docssubmgt3basemtafilterdowndef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseMtaFilterUpDef")
    {
        docssubmgt3basemtafilterupdef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseStbFilterDownDef")
    {
        docssubmgt3basestbfilterdowndef.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3BaseStbFilterUpDef")
    {
        docssubmgt3basestbfilterupdef.yfilter = yfilter;
    }
}

bool DOCSSUBMGT3MIB::DocsSubmgt3Base::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsSubmgt3BaseCpeMaxIpv4Def" || name == "docsSubmgt3BaseCpeMaxIpv6PrefixDef" || name == "docsSubmgt3BaseCpeActiveDef" || name == "docsSubmgt3BaseCpeLearnableDef" || name == "docsSubmgt3BaseSubFilterDownDef" || name == "docsSubmgt3BaseSubFilterUpDef" || name == "docsSubmgt3BaseCmFilterDownDef" || name == "docsSubmgt3BaseCmFilterUpDef" || name == "docsSubmgt3BasePsFilterDownDef" || name == "docsSubmgt3BasePsFilterUpDef" || name == "docsSubmgt3BaseMtaFilterDownDef" || name == "docsSubmgt3BaseMtaFilterUpDef" || name == "docsSubmgt3BaseStbFilterDownDef" || name == "docsSubmgt3BaseStbFilterUpDef")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlTable()
    :
    docssubmgt3cpectrlentry(this, {"docsif3cmtscmregstatusid"})
{

    yang_name = "docsSubmgt3CpeCtrlTable"; yang_parent_name = "DOCS-SUBMGT3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::~DocsSubmgt3CpeCtrlTable()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docssubmgt3cpectrlentry.len(); index++)
    {
        if(docssubmgt3cpectrlentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::has_operation() const
{
    for (std::size_t index=0; index<docssubmgt3cpectrlentry.len(); index++)
    {
        if(docssubmgt3cpectrlentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3CpeCtrlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsSubmgt3CpeCtrlEntry")
    {
        auto ent_ = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry>();
        ent_->parent = this;
        docssubmgt3cpectrlentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docssubmgt3cpectrlentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsSubmgt3CpeCtrlEntry")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::DocsSubmgt3CpeCtrlEntry()
    :
    docsif3cmtscmregstatusid{YType::str, "docsIf3CmtsCmRegStatusId"},
    docssubmgt3cpectrlmaxcpeipv4{YType::uint32, "docsSubmgt3CpeCtrlMaxCpeIpv4"},
    docssubmgt3cpectrlmaxcpeipv6prefix{YType::uint32, "docsSubmgt3CpeCtrlMaxCpeIpv6Prefix"},
    docssubmgt3cpectrlactive{YType::boolean, "docsSubmgt3CpeCtrlActive"},
    docssubmgt3cpectrllearnable{YType::boolean, "docsSubmgt3CpeCtrlLearnable"},
    docssubmgt3cpectrlreset{YType::boolean, "docsSubmgt3CpeCtrlReset"},
    docssubmgt3cpectrllastreset{YType::uint32, "docsSubmgt3CpeCtrlLastReset"}
{

    yang_name = "docsSubmgt3CpeCtrlEntry"; yang_parent_name = "docsSubmgt3CpeCtrlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::~DocsSubmgt3CpeCtrlEntry()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmtscmregstatusid.is_set
	|| docssubmgt3cpectrlmaxcpeipv4.is_set
	|| docssubmgt3cpectrlmaxcpeipv6prefix.is_set
	|| docssubmgt3cpectrlactive.is_set
	|| docssubmgt3cpectrllearnable.is_set
	|| docssubmgt3cpectrlreset.is_set
	|| docssubmgt3cpectrllastreset.is_set;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusid.yfilter)
	|| ydk::is_set(docssubmgt3cpectrlmaxcpeipv4.yfilter)
	|| ydk::is_set(docssubmgt3cpectrlmaxcpeipv6prefix.yfilter)
	|| ydk::is_set(docssubmgt3cpectrlactive.yfilter)
	|| ydk::is_set(docssubmgt3cpectrllearnable.yfilter)
	|| ydk::is_set(docssubmgt3cpectrlreset.yfilter)
	|| ydk::is_set(docssubmgt3cpectrllastreset.yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/docsSubmgt3CpeCtrlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3CpeCtrlEntry";
    ADD_KEY_TOKEN(docsif3cmtscmregstatusid, "docsIf3CmtsCmRegStatusId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmtscmregstatusid.is_set || is_set(docsif3cmtscmregstatusid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusid.get_name_leafdata());
    if (docssubmgt3cpectrlmaxcpeipv4.is_set || is_set(docssubmgt3cpectrlmaxcpeipv4.yfilter)) leaf_name_data.push_back(docssubmgt3cpectrlmaxcpeipv4.get_name_leafdata());
    if (docssubmgt3cpectrlmaxcpeipv6prefix.is_set || is_set(docssubmgt3cpectrlmaxcpeipv6prefix.yfilter)) leaf_name_data.push_back(docssubmgt3cpectrlmaxcpeipv6prefix.get_name_leafdata());
    if (docssubmgt3cpectrlactive.is_set || is_set(docssubmgt3cpectrlactive.yfilter)) leaf_name_data.push_back(docssubmgt3cpectrlactive.get_name_leafdata());
    if (docssubmgt3cpectrllearnable.is_set || is_set(docssubmgt3cpectrllearnable.yfilter)) leaf_name_data.push_back(docssubmgt3cpectrllearnable.get_name_leafdata());
    if (docssubmgt3cpectrlreset.is_set || is_set(docssubmgt3cpectrlreset.yfilter)) leaf_name_data.push_back(docssubmgt3cpectrlreset.get_name_leafdata());
    if (docssubmgt3cpectrllastreset.is_set || is_set(docssubmgt3cpectrllastreset.yfilter)) leaf_name_data.push_back(docssubmgt3cpectrllastreset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid = value;
        docsif3cmtscmregstatusid.value_namespace = name_space;
        docsif3cmtscmregstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeCtrlMaxCpeIpv4")
    {
        docssubmgt3cpectrlmaxcpeipv4 = value;
        docssubmgt3cpectrlmaxcpeipv4.value_namespace = name_space;
        docssubmgt3cpectrlmaxcpeipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeCtrlMaxCpeIpv6Prefix")
    {
        docssubmgt3cpectrlmaxcpeipv6prefix = value;
        docssubmgt3cpectrlmaxcpeipv6prefix.value_namespace = name_space;
        docssubmgt3cpectrlmaxcpeipv6prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeCtrlActive")
    {
        docssubmgt3cpectrlactive = value;
        docssubmgt3cpectrlactive.value_namespace = name_space;
        docssubmgt3cpectrlactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeCtrlLearnable")
    {
        docssubmgt3cpectrllearnable = value;
        docssubmgt3cpectrllearnable.value_namespace = name_space;
        docssubmgt3cpectrllearnable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeCtrlReset")
    {
        docssubmgt3cpectrlreset = value;
        docssubmgt3cpectrlreset.value_namespace = name_space;
        docssubmgt3cpectrlreset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeCtrlLastReset")
    {
        docssubmgt3cpectrllastreset = value;
        docssubmgt3cpectrllastreset.value_namespace = name_space;
        docssubmgt3cpectrllastreset.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeCtrlMaxCpeIpv4")
    {
        docssubmgt3cpectrlmaxcpeipv4.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeCtrlMaxCpeIpv6Prefix")
    {
        docssubmgt3cpectrlmaxcpeipv6prefix.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeCtrlActive")
    {
        docssubmgt3cpectrlactive.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeCtrlLearnable")
    {
        docssubmgt3cpectrllearnable.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeCtrlReset")
    {
        docssubmgt3cpectrlreset.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeCtrlLastReset")
    {
        docssubmgt3cpectrllastreset.yfilter = yfilter;
    }
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeCtrlTable::DocsSubmgt3CpeCtrlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmRegStatusId" || name == "docsSubmgt3CpeCtrlMaxCpeIpv4" || name == "docsSubmgt3CpeCtrlMaxCpeIpv6Prefix" || name == "docsSubmgt3CpeCtrlActive" || name == "docsSubmgt3CpeCtrlLearnable" || name == "docsSubmgt3CpeCtrlReset" || name == "docsSubmgt3CpeCtrlLastReset")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpTable()
    :
    docssubmgt3cpeipentry(this, {"docsif3cmtscmregstatusid", "docssubmgt3cpeipid"})
{

    yang_name = "docsSubmgt3CpeIpTable"; yang_parent_name = "DOCS-SUBMGT3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::~DocsSubmgt3CpeIpTable()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docssubmgt3cpeipentry.len(); index++)
    {
        if(docssubmgt3cpeipentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::has_operation() const
{
    for (std::size_t index=0; index<docssubmgt3cpeipentry.len(); index++)
    {
        if(docssubmgt3cpeipentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3CpeIpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsSubmgt3CpeIpEntry")
    {
        auto ent_ = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry>();
        ent_->parent = this;
        docssubmgt3cpeipentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docssubmgt3cpeipentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsSubmgt3CpeIpEntry")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::DocsSubmgt3CpeIpEntry()
    :
    docsif3cmtscmregstatusid{YType::str, "docsIf3CmtsCmRegStatusId"},
    docssubmgt3cpeipid{YType::uint32, "docsSubmgt3CpeIpId"},
    docssubmgt3cpeipaddrtype{YType::enumeration, "docsSubmgt3CpeIpAddrType"},
    docssubmgt3cpeipaddr{YType::str, "docsSubmgt3CpeIpAddr"},
    docssubmgt3cpeipaddrprefixlen{YType::uint32, "docsSubmgt3CpeIpAddrPrefixLen"},
    docssubmgt3cpeiplearned{YType::boolean, "docsSubmgt3CpeIpLearned"},
    docssubmgt3cpeiptype{YType::enumeration, "docsSubmgt3CpeIpType"}
{

    yang_name = "docsSubmgt3CpeIpEntry"; yang_parent_name = "docsSubmgt3CpeIpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::~DocsSubmgt3CpeIpEntry()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmtscmregstatusid.is_set
	|| docssubmgt3cpeipid.is_set
	|| docssubmgt3cpeipaddrtype.is_set
	|| docssubmgt3cpeipaddr.is_set
	|| docssubmgt3cpeipaddrprefixlen.is_set
	|| docssubmgt3cpeiplearned.is_set
	|| docssubmgt3cpeiptype.is_set;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusid.yfilter)
	|| ydk::is_set(docssubmgt3cpeipid.yfilter)
	|| ydk::is_set(docssubmgt3cpeipaddrtype.yfilter)
	|| ydk::is_set(docssubmgt3cpeipaddr.yfilter)
	|| ydk::is_set(docssubmgt3cpeipaddrprefixlen.yfilter)
	|| ydk::is_set(docssubmgt3cpeiplearned.yfilter)
	|| ydk::is_set(docssubmgt3cpeiptype.yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/docsSubmgt3CpeIpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3CpeIpEntry";
    ADD_KEY_TOKEN(docsif3cmtscmregstatusid, "docsIf3CmtsCmRegStatusId");
    ADD_KEY_TOKEN(docssubmgt3cpeipid, "docsSubmgt3CpeIpId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmtscmregstatusid.is_set || is_set(docsif3cmtscmregstatusid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusid.get_name_leafdata());
    if (docssubmgt3cpeipid.is_set || is_set(docssubmgt3cpeipid.yfilter)) leaf_name_data.push_back(docssubmgt3cpeipid.get_name_leafdata());
    if (docssubmgt3cpeipaddrtype.is_set || is_set(docssubmgt3cpeipaddrtype.yfilter)) leaf_name_data.push_back(docssubmgt3cpeipaddrtype.get_name_leafdata());
    if (docssubmgt3cpeipaddr.is_set || is_set(docssubmgt3cpeipaddr.yfilter)) leaf_name_data.push_back(docssubmgt3cpeipaddr.get_name_leafdata());
    if (docssubmgt3cpeipaddrprefixlen.is_set || is_set(docssubmgt3cpeipaddrprefixlen.yfilter)) leaf_name_data.push_back(docssubmgt3cpeipaddrprefixlen.get_name_leafdata());
    if (docssubmgt3cpeiplearned.is_set || is_set(docssubmgt3cpeiplearned.yfilter)) leaf_name_data.push_back(docssubmgt3cpeiplearned.get_name_leafdata());
    if (docssubmgt3cpeiptype.is_set || is_set(docssubmgt3cpeiptype.yfilter)) leaf_name_data.push_back(docssubmgt3cpeiptype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid = value;
        docsif3cmtscmregstatusid.value_namespace = name_space;
        docsif3cmtscmregstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeIpId")
    {
        docssubmgt3cpeipid = value;
        docssubmgt3cpeipid.value_namespace = name_space;
        docssubmgt3cpeipid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeIpAddrType")
    {
        docssubmgt3cpeipaddrtype = value;
        docssubmgt3cpeipaddrtype.value_namespace = name_space;
        docssubmgt3cpeipaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeIpAddr")
    {
        docssubmgt3cpeipaddr = value;
        docssubmgt3cpeipaddr.value_namespace = name_space;
        docssubmgt3cpeipaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeIpAddrPrefixLen")
    {
        docssubmgt3cpeipaddrprefixlen = value;
        docssubmgt3cpeipaddrprefixlen.value_namespace = name_space;
        docssubmgt3cpeipaddrprefixlen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeIpLearned")
    {
        docssubmgt3cpeiplearned = value;
        docssubmgt3cpeiplearned.value_namespace = name_space;
        docssubmgt3cpeiplearned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3CpeIpType")
    {
        docssubmgt3cpeiptype = value;
        docssubmgt3cpeiptype.value_namespace = name_space;
        docssubmgt3cpeiptype.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeIpId")
    {
        docssubmgt3cpeipid.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeIpAddrType")
    {
        docssubmgt3cpeipaddrtype.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeIpAddr")
    {
        docssubmgt3cpeipaddr.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeIpAddrPrefixLen")
    {
        docssubmgt3cpeipaddrprefixlen.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeIpLearned")
    {
        docssubmgt3cpeiplearned.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3CpeIpType")
    {
        docssubmgt3cpeiptype.yfilter = yfilter;
    }
}

bool DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmRegStatusId" || name == "docsSubmgt3CpeIpId" || name == "docsSubmgt3CpeIpAddrType" || name == "docsSubmgt3CpeIpAddr" || name == "docsSubmgt3CpeIpAddrPrefixLen" || name == "docsSubmgt3CpeIpLearned" || name == "docsSubmgt3CpeIpType")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpTable()
    :
    docssubmgt3grpentry(this, {"docsif3cmtscmregstatusid"})
{

    yang_name = "docsSubmgt3GrpTable"; yang_parent_name = "DOCS-SUBMGT3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::~DocsSubmgt3GrpTable()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docssubmgt3grpentry.len(); index++)
    {
        if(docssubmgt3grpentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::has_operation() const
{
    for (std::size_t index=0; index<docssubmgt3grpentry.len(); index++)
    {
        if(docssubmgt3grpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3GrpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsSubmgt3GrpEntry")
    {
        auto ent_ = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry>();
        ent_->parent = this;
        docssubmgt3grpentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docssubmgt3grpentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsSubmgt3GrpEntry")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::DocsSubmgt3GrpEntry()
    :
    docsif3cmtscmregstatusid{YType::str, "docsIf3CmtsCmRegStatusId"},
    docssubmgt3grpudcgroupids{YType::str, "docsSubMgt3GrpUdcGroupIds"},
    docssubmgt3grpudcsentinregrsp{YType::boolean, "docsSubMgt3GrpUdcSentInRegRsp"},
    docssubmgt3grpsubfilterds{YType::uint32, "docsSubmgt3GrpSubFilterDs"},
    docssubmgt3grpsubfilterus{YType::uint32, "docsSubmgt3GrpSubFilterUs"},
    docssubmgt3grpcmfilterds{YType::uint32, "docsSubmgt3GrpCmFilterDs"},
    docssubmgt3grpcmfilterus{YType::uint32, "docsSubmgt3GrpCmFilterUs"},
    docssubmgt3grppsfilterds{YType::uint32, "docsSubmgt3GrpPsFilterDs"},
    docssubmgt3grppsfilterus{YType::uint32, "docsSubmgt3GrpPsFilterUs"},
    docssubmgt3grpmtafilterds{YType::uint32, "docsSubmgt3GrpMtaFilterDs"},
    docssubmgt3grpmtafilterus{YType::uint32, "docsSubmgt3GrpMtaFilterUs"},
    docssubmgt3grpstbfilterds{YType::uint32, "docsSubmgt3GrpStbFilterDs"},
    docssubmgt3grpstbfilterus{YType::uint32, "docsSubmgt3GrpStbFilterUs"}
{

    yang_name = "docsSubmgt3GrpEntry"; yang_parent_name = "docsSubmgt3GrpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::~DocsSubmgt3GrpEntry()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmtscmregstatusid.is_set
	|| docssubmgt3grpudcgroupids.is_set
	|| docssubmgt3grpudcsentinregrsp.is_set
	|| docssubmgt3grpsubfilterds.is_set
	|| docssubmgt3grpsubfilterus.is_set
	|| docssubmgt3grpcmfilterds.is_set
	|| docssubmgt3grpcmfilterus.is_set
	|| docssubmgt3grppsfilterds.is_set
	|| docssubmgt3grppsfilterus.is_set
	|| docssubmgt3grpmtafilterds.is_set
	|| docssubmgt3grpmtafilterus.is_set
	|| docssubmgt3grpstbfilterds.is_set
	|| docssubmgt3grpstbfilterus.is_set;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusid.yfilter)
	|| ydk::is_set(docssubmgt3grpudcgroupids.yfilter)
	|| ydk::is_set(docssubmgt3grpudcsentinregrsp.yfilter)
	|| ydk::is_set(docssubmgt3grpsubfilterds.yfilter)
	|| ydk::is_set(docssubmgt3grpsubfilterus.yfilter)
	|| ydk::is_set(docssubmgt3grpcmfilterds.yfilter)
	|| ydk::is_set(docssubmgt3grpcmfilterus.yfilter)
	|| ydk::is_set(docssubmgt3grppsfilterds.yfilter)
	|| ydk::is_set(docssubmgt3grppsfilterus.yfilter)
	|| ydk::is_set(docssubmgt3grpmtafilterds.yfilter)
	|| ydk::is_set(docssubmgt3grpmtafilterus.yfilter)
	|| ydk::is_set(docssubmgt3grpstbfilterds.yfilter)
	|| ydk::is_set(docssubmgt3grpstbfilterus.yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/docsSubmgt3GrpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3GrpEntry";
    ADD_KEY_TOKEN(docsif3cmtscmregstatusid, "docsIf3CmtsCmRegStatusId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmtscmregstatusid.is_set || is_set(docsif3cmtscmregstatusid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusid.get_name_leafdata());
    if (docssubmgt3grpudcgroupids.is_set || is_set(docssubmgt3grpudcgroupids.yfilter)) leaf_name_data.push_back(docssubmgt3grpudcgroupids.get_name_leafdata());
    if (docssubmgt3grpudcsentinregrsp.is_set || is_set(docssubmgt3grpudcsentinregrsp.yfilter)) leaf_name_data.push_back(docssubmgt3grpudcsentinregrsp.get_name_leafdata());
    if (docssubmgt3grpsubfilterds.is_set || is_set(docssubmgt3grpsubfilterds.yfilter)) leaf_name_data.push_back(docssubmgt3grpsubfilterds.get_name_leafdata());
    if (docssubmgt3grpsubfilterus.is_set || is_set(docssubmgt3grpsubfilterus.yfilter)) leaf_name_data.push_back(docssubmgt3grpsubfilterus.get_name_leafdata());
    if (docssubmgt3grpcmfilterds.is_set || is_set(docssubmgt3grpcmfilterds.yfilter)) leaf_name_data.push_back(docssubmgt3grpcmfilterds.get_name_leafdata());
    if (docssubmgt3grpcmfilterus.is_set || is_set(docssubmgt3grpcmfilterus.yfilter)) leaf_name_data.push_back(docssubmgt3grpcmfilterus.get_name_leafdata());
    if (docssubmgt3grppsfilterds.is_set || is_set(docssubmgt3grppsfilterds.yfilter)) leaf_name_data.push_back(docssubmgt3grppsfilterds.get_name_leafdata());
    if (docssubmgt3grppsfilterus.is_set || is_set(docssubmgt3grppsfilterus.yfilter)) leaf_name_data.push_back(docssubmgt3grppsfilterus.get_name_leafdata());
    if (docssubmgt3grpmtafilterds.is_set || is_set(docssubmgt3grpmtafilterds.yfilter)) leaf_name_data.push_back(docssubmgt3grpmtafilterds.get_name_leafdata());
    if (docssubmgt3grpmtafilterus.is_set || is_set(docssubmgt3grpmtafilterus.yfilter)) leaf_name_data.push_back(docssubmgt3grpmtafilterus.get_name_leafdata());
    if (docssubmgt3grpstbfilterds.is_set || is_set(docssubmgt3grpstbfilterds.yfilter)) leaf_name_data.push_back(docssubmgt3grpstbfilterds.get_name_leafdata());
    if (docssubmgt3grpstbfilterus.is_set || is_set(docssubmgt3grpstbfilterus.yfilter)) leaf_name_data.push_back(docssubmgt3grpstbfilterus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid = value;
        docsif3cmtscmregstatusid.value_namespace = name_space;
        docsif3cmtscmregstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubMgt3GrpUdcGroupIds")
    {
        docssubmgt3grpudcgroupids = value;
        docssubmgt3grpudcgroupids.value_namespace = name_space;
        docssubmgt3grpudcgroupids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubMgt3GrpUdcSentInRegRsp")
    {
        docssubmgt3grpudcsentinregrsp = value;
        docssubmgt3grpudcsentinregrsp.value_namespace = name_space;
        docssubmgt3grpudcsentinregrsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpSubFilterDs")
    {
        docssubmgt3grpsubfilterds = value;
        docssubmgt3grpsubfilterds.value_namespace = name_space;
        docssubmgt3grpsubfilterds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpSubFilterUs")
    {
        docssubmgt3grpsubfilterus = value;
        docssubmgt3grpsubfilterus.value_namespace = name_space;
        docssubmgt3grpsubfilterus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpCmFilterDs")
    {
        docssubmgt3grpcmfilterds = value;
        docssubmgt3grpcmfilterds.value_namespace = name_space;
        docssubmgt3grpcmfilterds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpCmFilterUs")
    {
        docssubmgt3grpcmfilterus = value;
        docssubmgt3grpcmfilterus.value_namespace = name_space;
        docssubmgt3grpcmfilterus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpPsFilterDs")
    {
        docssubmgt3grppsfilterds = value;
        docssubmgt3grppsfilterds.value_namespace = name_space;
        docssubmgt3grppsfilterds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpPsFilterUs")
    {
        docssubmgt3grppsfilterus = value;
        docssubmgt3grppsfilterus.value_namespace = name_space;
        docssubmgt3grppsfilterus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpMtaFilterDs")
    {
        docssubmgt3grpmtafilterds = value;
        docssubmgt3grpmtafilterds.value_namespace = name_space;
        docssubmgt3grpmtafilterds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpMtaFilterUs")
    {
        docssubmgt3grpmtafilterus = value;
        docssubmgt3grpmtafilterus.value_namespace = name_space;
        docssubmgt3grpmtafilterus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpStbFilterDs")
    {
        docssubmgt3grpstbfilterds = value;
        docssubmgt3grpstbfilterds.value_namespace = name_space;
        docssubmgt3grpstbfilterds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3GrpStbFilterUs")
    {
        docssubmgt3grpstbfilterus = value;
        docssubmgt3grpstbfilterus.value_namespace = name_space;
        docssubmgt3grpstbfilterus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid.yfilter = yfilter;
    }
    if(value_path == "docsSubMgt3GrpUdcGroupIds")
    {
        docssubmgt3grpudcgroupids.yfilter = yfilter;
    }
    if(value_path == "docsSubMgt3GrpUdcSentInRegRsp")
    {
        docssubmgt3grpudcsentinregrsp.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpSubFilterDs")
    {
        docssubmgt3grpsubfilterds.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpSubFilterUs")
    {
        docssubmgt3grpsubfilterus.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpCmFilterDs")
    {
        docssubmgt3grpcmfilterds.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpCmFilterUs")
    {
        docssubmgt3grpcmfilterus.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpPsFilterDs")
    {
        docssubmgt3grppsfilterds.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpPsFilterUs")
    {
        docssubmgt3grppsfilterus.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpMtaFilterDs")
    {
        docssubmgt3grpmtafilterds.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpMtaFilterUs")
    {
        docssubmgt3grpmtafilterus.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpStbFilterDs")
    {
        docssubmgt3grpstbfilterds.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3GrpStbFilterUs")
    {
        docssubmgt3grpstbfilterus.yfilter = yfilter;
    }
}

bool DOCSSUBMGT3MIB::DocsSubmgt3GrpTable::DocsSubmgt3GrpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmRegStatusId" || name == "docsSubMgt3GrpUdcGroupIds" || name == "docsSubMgt3GrpUdcSentInRegRsp" || name == "docsSubmgt3GrpSubFilterDs" || name == "docsSubmgt3GrpSubFilterUs" || name == "docsSubmgt3GrpCmFilterDs" || name == "docsSubmgt3GrpCmFilterUs" || name == "docsSubmgt3GrpPsFilterDs" || name == "docsSubmgt3GrpPsFilterUs" || name == "docsSubmgt3GrpMtaFilterDs" || name == "docsSubmgt3GrpMtaFilterUs" || name == "docsSubmgt3GrpStbFilterDs" || name == "docsSubmgt3GrpStbFilterUs")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpTable()
    :
    docssubmgt3filtergrpentry(this, {"docssubmgt3filtergrpgrpid", "docssubmgt3filtergrpruleid"})
{

    yang_name = "docsSubmgt3FilterGrpTable"; yang_parent_name = "DOCS-SUBMGT3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::~DocsSubmgt3FilterGrpTable()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docssubmgt3filtergrpentry.len(); index++)
    {
        if(docssubmgt3filtergrpentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::has_operation() const
{
    for (std::size_t index=0; index<docssubmgt3filtergrpentry.len(); index++)
    {
        if(docssubmgt3filtergrpentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3FilterGrpTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsSubmgt3FilterGrpEntry")
    {
        auto ent_ = std::make_shared<DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry>();
        ent_->parent = this;
        docssubmgt3filtergrpentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : docssubmgt3filtergrpentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsSubmgt3FilterGrpEntry")
        return true;
    return false;
}

DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpEntry()
    :
    docssubmgt3filtergrpgrpid{YType::uint32, "docsSubmgt3FilterGrpGrpId"},
    docssubmgt3filtergrpruleid{YType::uint32, "docsSubmgt3FilterGrpRuleId"},
    docssubmgt3filtergrpaction{YType::enumeration, "docsSubmgt3FilterGrpAction"},
    docssubmgt3filtergrppriority{YType::uint32, "docsSubmgt3FilterGrpPriority"},
    docssubmgt3filtergrpiptoslow{YType::str, "docsSubmgt3FilterGrpIpTosLow"},
    docssubmgt3filtergrpiptoshigh{YType::str, "docsSubmgt3FilterGrpIpTosHigh"},
    docssubmgt3filtergrpiptosmask{YType::str, "docsSubmgt3FilterGrpIpTosMask"},
    docssubmgt3filtergrpipprotocol{YType::uint32, "docsSubmgt3FilterGrpIpProtocol"},
    docssubmgt3filtergrpinetaddrtype{YType::enumeration, "docsSubmgt3FilterGrpInetAddrType"},
    docssubmgt3filtergrpinetsrcaddr{YType::str, "docsSubmgt3FilterGrpInetSrcAddr"},
    docssubmgt3filtergrpinetsrcmask{YType::str, "docsSubmgt3FilterGrpInetSrcMask"},
    docssubmgt3filtergrpinetdestaddr{YType::str, "docsSubmgt3FilterGrpInetDestAddr"},
    docssubmgt3filtergrpinetdestmask{YType::str, "docsSubmgt3FilterGrpInetDestMask"},
    docssubmgt3filtergrpsrcportstart{YType::uint16, "docsSubmgt3FilterGrpSrcPortStart"},
    docssubmgt3filtergrpsrcportend{YType::uint16, "docsSubmgt3FilterGrpSrcPortEnd"},
    docssubmgt3filtergrpdestportstart{YType::uint16, "docsSubmgt3FilterGrpDestPortStart"},
    docssubmgt3filtergrpdestportend{YType::uint16, "docsSubmgt3FilterGrpDestPortEnd"},
    docssubmgt3filtergrpdestmacaddr{YType::str, "docsSubmgt3FilterGrpDestMacAddr"},
    docssubmgt3filtergrpdestmacmask{YType::str, "docsSubmgt3FilterGrpDestMacMask"},
    docssubmgt3filtergrpsrcmacaddr{YType::str, "docsSubmgt3FilterGrpSrcMacAddr"},
    docssubmgt3filtergrpenetprotocoltype{YType::enumeration, "docsSubmgt3FilterGrpEnetProtocolType"},
    docssubmgt3filtergrpenetprotocol{YType::uint32, "docsSubmgt3FilterGrpEnetProtocol"},
    docssubmgt3filtergrpuserprilow{YType::uint32, "docsSubmgt3FilterGrpUserPriLow"},
    docssubmgt3filtergrpuserprihigh{YType::uint32, "docsSubmgt3FilterGrpUserPriHigh"},
    docssubmgt3filtergrpvlanid{YType::uint32, "docsSubmgt3FilterGrpVlanId"},
    docssubmgt3filtergrpclasspkts{YType::uint64, "docsSubmgt3FilterGrpClassPkts"},
    docssubmgt3filtergrpflowlabel{YType::uint32, "docsSubmgt3FilterGrpFlowLabel"},
    docssubmgt3filtergrpcminterfacemask{YType::bits, "docsSubmgt3FilterGrpCmInterfaceMask"},
    docssubmgt3filtergrprowstatus{YType::enumeration, "docsSubmgt3FilterGrpRowStatus"}
{

    yang_name = "docsSubmgt3FilterGrpEntry"; yang_parent_name = "docsSubmgt3FilterGrpTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::~DocsSubmgt3FilterGrpEntry()
{
}

bool DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::has_data() const
{
    if (is_presence_container) return true;
    return docssubmgt3filtergrpgrpid.is_set
	|| docssubmgt3filtergrpruleid.is_set
	|| docssubmgt3filtergrpaction.is_set
	|| docssubmgt3filtergrppriority.is_set
	|| docssubmgt3filtergrpiptoslow.is_set
	|| docssubmgt3filtergrpiptoshigh.is_set
	|| docssubmgt3filtergrpiptosmask.is_set
	|| docssubmgt3filtergrpipprotocol.is_set
	|| docssubmgt3filtergrpinetaddrtype.is_set
	|| docssubmgt3filtergrpinetsrcaddr.is_set
	|| docssubmgt3filtergrpinetsrcmask.is_set
	|| docssubmgt3filtergrpinetdestaddr.is_set
	|| docssubmgt3filtergrpinetdestmask.is_set
	|| docssubmgt3filtergrpsrcportstart.is_set
	|| docssubmgt3filtergrpsrcportend.is_set
	|| docssubmgt3filtergrpdestportstart.is_set
	|| docssubmgt3filtergrpdestportend.is_set
	|| docssubmgt3filtergrpdestmacaddr.is_set
	|| docssubmgt3filtergrpdestmacmask.is_set
	|| docssubmgt3filtergrpsrcmacaddr.is_set
	|| docssubmgt3filtergrpenetprotocoltype.is_set
	|| docssubmgt3filtergrpenetprotocol.is_set
	|| docssubmgt3filtergrpuserprilow.is_set
	|| docssubmgt3filtergrpuserprihigh.is_set
	|| docssubmgt3filtergrpvlanid.is_set
	|| docssubmgt3filtergrpclasspkts.is_set
	|| docssubmgt3filtergrpflowlabel.is_set
	|| docssubmgt3filtergrpcminterfacemask.is_set
	|| docssubmgt3filtergrprowstatus.is_set;
}

bool DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docssubmgt3filtergrpgrpid.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpruleid.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpaction.yfilter)
	|| ydk::is_set(docssubmgt3filtergrppriority.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpiptoslow.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpiptoshigh.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpiptosmask.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpipprotocol.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpinetaddrtype.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpinetsrcaddr.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpinetsrcmask.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpinetdestaddr.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpinetdestmask.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpsrcportstart.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpsrcportend.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpdestportstart.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpdestportend.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpdestmacaddr.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpdestmacmask.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpsrcmacaddr.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpenetprotocoltype.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpenetprotocol.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpuserprilow.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpuserprihigh.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpvlanid.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpclasspkts.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpflowlabel.yfilter)
	|| ydk::is_set(docssubmgt3filtergrpcminterfacemask.yfilter)
	|| ydk::is_set(docssubmgt3filtergrprowstatus.yfilter);
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-SUBMGT3-MIB:DOCS-SUBMGT3-MIB/docsSubmgt3FilterGrpTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsSubmgt3FilterGrpEntry";
    ADD_KEY_TOKEN(docssubmgt3filtergrpgrpid, "docsSubmgt3FilterGrpGrpId");
    ADD_KEY_TOKEN(docssubmgt3filtergrpruleid, "docsSubmgt3FilterGrpRuleId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docssubmgt3filtergrpgrpid.is_set || is_set(docssubmgt3filtergrpgrpid.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpgrpid.get_name_leafdata());
    if (docssubmgt3filtergrpruleid.is_set || is_set(docssubmgt3filtergrpruleid.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpruleid.get_name_leafdata());
    if (docssubmgt3filtergrpaction.is_set || is_set(docssubmgt3filtergrpaction.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpaction.get_name_leafdata());
    if (docssubmgt3filtergrppriority.is_set || is_set(docssubmgt3filtergrppriority.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrppriority.get_name_leafdata());
    if (docssubmgt3filtergrpiptoslow.is_set || is_set(docssubmgt3filtergrpiptoslow.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpiptoslow.get_name_leafdata());
    if (docssubmgt3filtergrpiptoshigh.is_set || is_set(docssubmgt3filtergrpiptoshigh.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpiptoshigh.get_name_leafdata());
    if (docssubmgt3filtergrpiptosmask.is_set || is_set(docssubmgt3filtergrpiptosmask.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpiptosmask.get_name_leafdata());
    if (docssubmgt3filtergrpipprotocol.is_set || is_set(docssubmgt3filtergrpipprotocol.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpipprotocol.get_name_leafdata());
    if (docssubmgt3filtergrpinetaddrtype.is_set || is_set(docssubmgt3filtergrpinetaddrtype.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpinetaddrtype.get_name_leafdata());
    if (docssubmgt3filtergrpinetsrcaddr.is_set || is_set(docssubmgt3filtergrpinetsrcaddr.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpinetsrcaddr.get_name_leafdata());
    if (docssubmgt3filtergrpinetsrcmask.is_set || is_set(docssubmgt3filtergrpinetsrcmask.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpinetsrcmask.get_name_leafdata());
    if (docssubmgt3filtergrpinetdestaddr.is_set || is_set(docssubmgt3filtergrpinetdestaddr.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpinetdestaddr.get_name_leafdata());
    if (docssubmgt3filtergrpinetdestmask.is_set || is_set(docssubmgt3filtergrpinetdestmask.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpinetdestmask.get_name_leafdata());
    if (docssubmgt3filtergrpsrcportstart.is_set || is_set(docssubmgt3filtergrpsrcportstart.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpsrcportstart.get_name_leafdata());
    if (docssubmgt3filtergrpsrcportend.is_set || is_set(docssubmgt3filtergrpsrcportend.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpsrcportend.get_name_leafdata());
    if (docssubmgt3filtergrpdestportstart.is_set || is_set(docssubmgt3filtergrpdestportstart.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpdestportstart.get_name_leafdata());
    if (docssubmgt3filtergrpdestportend.is_set || is_set(docssubmgt3filtergrpdestportend.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpdestportend.get_name_leafdata());
    if (docssubmgt3filtergrpdestmacaddr.is_set || is_set(docssubmgt3filtergrpdestmacaddr.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpdestmacaddr.get_name_leafdata());
    if (docssubmgt3filtergrpdestmacmask.is_set || is_set(docssubmgt3filtergrpdestmacmask.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpdestmacmask.get_name_leafdata());
    if (docssubmgt3filtergrpsrcmacaddr.is_set || is_set(docssubmgt3filtergrpsrcmacaddr.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpsrcmacaddr.get_name_leafdata());
    if (docssubmgt3filtergrpenetprotocoltype.is_set || is_set(docssubmgt3filtergrpenetprotocoltype.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpenetprotocoltype.get_name_leafdata());
    if (docssubmgt3filtergrpenetprotocol.is_set || is_set(docssubmgt3filtergrpenetprotocol.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpenetprotocol.get_name_leafdata());
    if (docssubmgt3filtergrpuserprilow.is_set || is_set(docssubmgt3filtergrpuserprilow.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpuserprilow.get_name_leafdata());
    if (docssubmgt3filtergrpuserprihigh.is_set || is_set(docssubmgt3filtergrpuserprihigh.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpuserprihigh.get_name_leafdata());
    if (docssubmgt3filtergrpvlanid.is_set || is_set(docssubmgt3filtergrpvlanid.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpvlanid.get_name_leafdata());
    if (docssubmgt3filtergrpclasspkts.is_set || is_set(docssubmgt3filtergrpclasspkts.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpclasspkts.get_name_leafdata());
    if (docssubmgt3filtergrpflowlabel.is_set || is_set(docssubmgt3filtergrpflowlabel.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpflowlabel.get_name_leafdata());
    if (docssubmgt3filtergrpcminterfacemask.is_set || is_set(docssubmgt3filtergrpcminterfacemask.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrpcminterfacemask.get_name_leafdata());
    if (docssubmgt3filtergrprowstatus.is_set || is_set(docssubmgt3filtergrprowstatus.yfilter)) leaf_name_data.push_back(docssubmgt3filtergrprowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsSubmgt3FilterGrpGrpId")
    {
        docssubmgt3filtergrpgrpid = value;
        docssubmgt3filtergrpgrpid.value_namespace = name_space;
        docssubmgt3filtergrpgrpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpRuleId")
    {
        docssubmgt3filtergrpruleid = value;
        docssubmgt3filtergrpruleid.value_namespace = name_space;
        docssubmgt3filtergrpruleid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpAction")
    {
        docssubmgt3filtergrpaction = value;
        docssubmgt3filtergrpaction.value_namespace = name_space;
        docssubmgt3filtergrpaction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpPriority")
    {
        docssubmgt3filtergrppriority = value;
        docssubmgt3filtergrppriority.value_namespace = name_space;
        docssubmgt3filtergrppriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpIpTosLow")
    {
        docssubmgt3filtergrpiptoslow = value;
        docssubmgt3filtergrpiptoslow.value_namespace = name_space;
        docssubmgt3filtergrpiptoslow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpIpTosHigh")
    {
        docssubmgt3filtergrpiptoshigh = value;
        docssubmgt3filtergrpiptoshigh.value_namespace = name_space;
        docssubmgt3filtergrpiptoshigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpIpTosMask")
    {
        docssubmgt3filtergrpiptosmask = value;
        docssubmgt3filtergrpiptosmask.value_namespace = name_space;
        docssubmgt3filtergrpiptosmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpIpProtocol")
    {
        docssubmgt3filtergrpipprotocol = value;
        docssubmgt3filtergrpipprotocol.value_namespace = name_space;
        docssubmgt3filtergrpipprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpInetAddrType")
    {
        docssubmgt3filtergrpinetaddrtype = value;
        docssubmgt3filtergrpinetaddrtype.value_namespace = name_space;
        docssubmgt3filtergrpinetaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpInetSrcAddr")
    {
        docssubmgt3filtergrpinetsrcaddr = value;
        docssubmgt3filtergrpinetsrcaddr.value_namespace = name_space;
        docssubmgt3filtergrpinetsrcaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpInetSrcMask")
    {
        docssubmgt3filtergrpinetsrcmask = value;
        docssubmgt3filtergrpinetsrcmask.value_namespace = name_space;
        docssubmgt3filtergrpinetsrcmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpInetDestAddr")
    {
        docssubmgt3filtergrpinetdestaddr = value;
        docssubmgt3filtergrpinetdestaddr.value_namespace = name_space;
        docssubmgt3filtergrpinetdestaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpInetDestMask")
    {
        docssubmgt3filtergrpinetdestmask = value;
        docssubmgt3filtergrpinetdestmask.value_namespace = name_space;
        docssubmgt3filtergrpinetdestmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpSrcPortStart")
    {
        docssubmgt3filtergrpsrcportstart = value;
        docssubmgt3filtergrpsrcportstart.value_namespace = name_space;
        docssubmgt3filtergrpsrcportstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpSrcPortEnd")
    {
        docssubmgt3filtergrpsrcportend = value;
        docssubmgt3filtergrpsrcportend.value_namespace = name_space;
        docssubmgt3filtergrpsrcportend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpDestPortStart")
    {
        docssubmgt3filtergrpdestportstart = value;
        docssubmgt3filtergrpdestportstart.value_namespace = name_space;
        docssubmgt3filtergrpdestportstart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpDestPortEnd")
    {
        docssubmgt3filtergrpdestportend = value;
        docssubmgt3filtergrpdestportend.value_namespace = name_space;
        docssubmgt3filtergrpdestportend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpDestMacAddr")
    {
        docssubmgt3filtergrpdestmacaddr = value;
        docssubmgt3filtergrpdestmacaddr.value_namespace = name_space;
        docssubmgt3filtergrpdestmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpDestMacMask")
    {
        docssubmgt3filtergrpdestmacmask = value;
        docssubmgt3filtergrpdestmacmask.value_namespace = name_space;
        docssubmgt3filtergrpdestmacmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpSrcMacAddr")
    {
        docssubmgt3filtergrpsrcmacaddr = value;
        docssubmgt3filtergrpsrcmacaddr.value_namespace = name_space;
        docssubmgt3filtergrpsrcmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpEnetProtocolType")
    {
        docssubmgt3filtergrpenetprotocoltype = value;
        docssubmgt3filtergrpenetprotocoltype.value_namespace = name_space;
        docssubmgt3filtergrpenetprotocoltype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpEnetProtocol")
    {
        docssubmgt3filtergrpenetprotocol = value;
        docssubmgt3filtergrpenetprotocol.value_namespace = name_space;
        docssubmgt3filtergrpenetprotocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpUserPriLow")
    {
        docssubmgt3filtergrpuserprilow = value;
        docssubmgt3filtergrpuserprilow.value_namespace = name_space;
        docssubmgt3filtergrpuserprilow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpUserPriHigh")
    {
        docssubmgt3filtergrpuserprihigh = value;
        docssubmgt3filtergrpuserprihigh.value_namespace = name_space;
        docssubmgt3filtergrpuserprihigh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpVlanId")
    {
        docssubmgt3filtergrpvlanid = value;
        docssubmgt3filtergrpvlanid.value_namespace = name_space;
        docssubmgt3filtergrpvlanid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpClassPkts")
    {
        docssubmgt3filtergrpclasspkts = value;
        docssubmgt3filtergrpclasspkts.value_namespace = name_space;
        docssubmgt3filtergrpclasspkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpFlowLabel")
    {
        docssubmgt3filtergrpflowlabel = value;
        docssubmgt3filtergrpflowlabel.value_namespace = name_space;
        docssubmgt3filtergrpflowlabel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsSubmgt3FilterGrpCmInterfaceMask")
    {
        docssubmgt3filtergrpcminterfacemask[value] = true;
    }
    if(value_path == "docsSubmgt3FilterGrpRowStatus")
    {
        docssubmgt3filtergrprowstatus = value;
        docssubmgt3filtergrprowstatus.value_namespace = name_space;
        docssubmgt3filtergrprowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsSubmgt3FilterGrpGrpId")
    {
        docssubmgt3filtergrpgrpid.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpRuleId")
    {
        docssubmgt3filtergrpruleid.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpAction")
    {
        docssubmgt3filtergrpaction.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpPriority")
    {
        docssubmgt3filtergrppriority.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpIpTosLow")
    {
        docssubmgt3filtergrpiptoslow.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpIpTosHigh")
    {
        docssubmgt3filtergrpiptoshigh.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpIpTosMask")
    {
        docssubmgt3filtergrpiptosmask.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpIpProtocol")
    {
        docssubmgt3filtergrpipprotocol.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpInetAddrType")
    {
        docssubmgt3filtergrpinetaddrtype.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpInetSrcAddr")
    {
        docssubmgt3filtergrpinetsrcaddr.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpInetSrcMask")
    {
        docssubmgt3filtergrpinetsrcmask.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpInetDestAddr")
    {
        docssubmgt3filtergrpinetdestaddr.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpInetDestMask")
    {
        docssubmgt3filtergrpinetdestmask.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpSrcPortStart")
    {
        docssubmgt3filtergrpsrcportstart.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpSrcPortEnd")
    {
        docssubmgt3filtergrpsrcportend.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpDestPortStart")
    {
        docssubmgt3filtergrpdestportstart.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpDestPortEnd")
    {
        docssubmgt3filtergrpdestportend.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpDestMacAddr")
    {
        docssubmgt3filtergrpdestmacaddr.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpDestMacMask")
    {
        docssubmgt3filtergrpdestmacmask.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpSrcMacAddr")
    {
        docssubmgt3filtergrpsrcmacaddr.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpEnetProtocolType")
    {
        docssubmgt3filtergrpenetprotocoltype.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpEnetProtocol")
    {
        docssubmgt3filtergrpenetprotocol.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpUserPriLow")
    {
        docssubmgt3filtergrpuserprilow.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpUserPriHigh")
    {
        docssubmgt3filtergrpuserprihigh.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpVlanId")
    {
        docssubmgt3filtergrpvlanid.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpClassPkts")
    {
        docssubmgt3filtergrpclasspkts.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpFlowLabel")
    {
        docssubmgt3filtergrpflowlabel.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpCmInterfaceMask")
    {
        docssubmgt3filtergrpcminterfacemask.yfilter = yfilter;
    }
    if(value_path == "docsSubmgt3FilterGrpRowStatus")
    {
        docssubmgt3filtergrprowstatus.yfilter = yfilter;
    }
}

bool DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsSubmgt3FilterGrpGrpId" || name == "docsSubmgt3FilterGrpRuleId" || name == "docsSubmgt3FilterGrpAction" || name == "docsSubmgt3FilterGrpPriority" || name == "docsSubmgt3FilterGrpIpTosLow" || name == "docsSubmgt3FilterGrpIpTosHigh" || name == "docsSubmgt3FilterGrpIpTosMask" || name == "docsSubmgt3FilterGrpIpProtocol" || name == "docsSubmgt3FilterGrpInetAddrType" || name == "docsSubmgt3FilterGrpInetSrcAddr" || name == "docsSubmgt3FilterGrpInetSrcMask" || name == "docsSubmgt3FilterGrpInetDestAddr" || name == "docsSubmgt3FilterGrpInetDestMask" || name == "docsSubmgt3FilterGrpSrcPortStart" || name == "docsSubmgt3FilterGrpSrcPortEnd" || name == "docsSubmgt3FilterGrpDestPortStart" || name == "docsSubmgt3FilterGrpDestPortEnd" || name == "docsSubmgt3FilterGrpDestMacAddr" || name == "docsSubmgt3FilterGrpDestMacMask" || name == "docsSubmgt3FilterGrpSrcMacAddr" || name == "docsSubmgt3FilterGrpEnetProtocolType" || name == "docsSubmgt3FilterGrpEnetProtocol" || name == "docsSubmgt3FilterGrpUserPriLow" || name == "docsSubmgt3FilterGrpUserPriHigh" || name == "docsSubmgt3FilterGrpVlanId" || name == "docsSubmgt3FilterGrpClassPkts" || name == "docsSubmgt3FilterGrpFlowLabel" || name == "docsSubmgt3FilterGrpCmInterfaceMask" || name == "docsSubmgt3FilterGrpRowStatus")
        return true;
    return false;
}

const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::DocsSubmgt3CpeIpType::cpe {1, "cpe"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::DocsSubmgt3CpeIpType::ps {2, "ps"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::DocsSubmgt3CpeIpType::mta {3, "mta"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::DocsSubmgt3CpeIpType::stb {4, "stb"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::DocsSubmgt3CpeIpType::tea {5, "tea"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3CpeIpTable::DocsSubmgt3CpeIpEntry::DocsSubmgt3CpeIpType::erouter {6, "erouter"};

const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpAction::permit {1, "permit"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpAction::deny {2, "deny"};

const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpEnetProtocolType::none {0, "none"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpEnetProtocolType::ethertype {1, "ethertype"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpEnetProtocolType::dsap {2, "dsap"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpEnetProtocolType::mac {3, "mac"};
const Enum::YLeaf DOCSSUBMGT3MIB::DocsSubmgt3FilterGrpTable::DocsSubmgt3FilterGrpEntry::DocsSubmgt3FilterGrpEnetProtocolType::all {4, "all"};


}
}

